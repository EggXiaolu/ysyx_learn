#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <error.h>
#include <string.h>

// #define MAX_DATA 512
// #define MAX_ROWS 100

int max_data = 0;
int max_rows = 0;

struct Address
{
    int id;
    int set;
    char *name;
    char *email;
    int sex;
};

struct Database
{
    int max_rows;
    int max_data;
    struct Address *rows;
};

struct Connection
{
    FILE *file;
    struct Database *db;
};

void die(const char *message);
void Address_print(struct Address *addr);
void Database_load();
struct Connection *Database_open(const char *filename, char mode);
void Database_close();
void Database_write();
void Database_create();
void Database_set(int id, const char *name, const char *email, int sex);
void Database_get(int id);
void Database_delete(int id);
void Database_list();

struct Connection *conn;

void die(const char *message)
{
    if (!conn)
        Database_close();
    if (error)
    {
        perror(message);
    }
    else
    {
        printf("ERROR: %s\n", message);
    }

    exit(1);
}

void Address_print(struct Address *addr)
{
    printf("%d %s %s %d\n", addr->id, addr->name, addr->email, addr->sex);
}

void Database_load()
{
    // 读取db
    int rc = fread(conn->db, sizeof(struct Database), 1, conn->file);
    if (rc != 1)
        die("Fail to load database.");

    max_rows = conn->db->max_rows;
    max_data = conn->db->max_data;

    struct Address *addr = malloc(max_rows * sizeof(struct Address));
    conn->db->rows = addr;
    for (int i = 0; i < max_rows; i++)
    {
        // 读取address
        rc = fread(&conn->db->rows[i], sizeof(struct Address), 1, conn->file);
        if (rc != 1)
            die("Failed to load address.");
        // 读取字符串
        char *name = malloc(max_data * sizeof(char));
        char *email = malloc(max_data * sizeof(char));
        conn->db->rows[i].name = name;
        conn->db->rows[i].email = email;
        rc = fread(conn->db->rows[i].name, max_data * sizeof(char), 1, conn->file);
        if (rc != 1)
            die("Failed to write name.");
        rc = fread(conn->db->rows[i].email, max_data * sizeof(char), 1, conn->file);
        if (rc != 1)
            die("Failed to write email.");
    }
}

struct Connection *Database_open(const char *filename, char mode)
{
    conn = malloc(sizeof(struct Connection));
    if (!conn)
        die("Memory error.");
    conn->db = malloc(sizeof(struct Database));
    if (!conn->db)
        die("Memory error.");
    if (mode == 'c')
    {
        conn->file = fopen(filename, "w");
    }
    else
    {
        conn->file = fopen(filename, "r+");
        if (conn->file)
        {
            Database_load();
        }
    }
    if (!conn->file)
        die("Fail to open the file.");
    return conn;
}

void Database_close()
{
    if (conn)
    {
        if (conn->file)
            fclose(conn->file);
        if (conn->db)
            free(conn->db);
        free(conn);
    }
}

void Database_write()
{
    rewind(conn->file);
    // 写入Database
    int rc = fwrite(conn->db, sizeof(struct Database), 1, conn->file);
    if (rc != 1)
        die("Failed to write database.");

    // 写入Address
    for (int i = 0; i < max_rows; i++)
    {
        rc = fwrite(&conn->db->rows[i], sizeof(struct Address), 1, conn->file);
        if (rc != 1)
            die("Failed to write address.");
        // 写入字符串
        rc = fwrite(conn->db->rows[i].name, max_data * sizeof(char), 1, conn->file);
        if (rc != 1)
            die("Failed to write name.");
        rc = fwrite(conn->db->rows[i].email, max_data * sizeof(char), 1, conn->file);
        if (rc != 1)
            die("Failed to write email.");
    }
    rc = fflush(conn->file);
    if (rc == -1)
        die("Cannot flush database.");
}

void Database_create()
{
    struct Address *addr = malloc(max_rows * sizeof(struct Address));
    conn->db->max_rows = max_rows;
    conn->db->max_data = max_data;
    for (int i = 0; i < max_rows; i++)
    {
        addr[i].id = i;
        addr[i].set = 0;
        char *name = malloc(max_data * sizeof(char));
        char *email = malloc(max_data * sizeof(char));
        addr[i].name = name;
        addr[i].email = email;
    }
    conn->db->rows = addr;
}

void Database_set(int id, const char *name, const char *email, int sex)
{
    struct Address *addr = &conn->db->rows[id];
    if (addr->set)
        die("Already set, delete if first.");
    addr->set = 1;
    // printf("name: %p, email: %p\n", addr->name, addr->email);
    char *res = strncpy(addr->name, name, max_data);
    if (!res)
        die("Name copy failed.");

    res = strncpy(addr->email, email, max_data);
    if (!res)
        die("Email copy failed.");
    addr->sex = sex;
}

void Database_get(int id)
{
    struct Address *addr = &conn->db->rows[id];
    if (addr->set)
    {
        Address_print(addr);
    }
    else
    {
        die("ID is not set.");
    }
}

void Database_delete(int id)
{
    conn->db->rows[id].set = 0;
}

void Database_list()
{
    struct Database *db = conn->db;
    for (int i = 0; i < max_rows; i++)
    {
        struct Address *cur = &db->rows[i];
        if (cur->set)
        {
            Address_print(cur);
        }
    }
}

int main(int argc, char **argv)
{
    if (argc < 3)
        die("USAGE: ex17 <dbfile> <action> [action params]");

    char *filename = argv[1];
    char action = argv[2][0];
    conn = Database_open(filename, action);
    int id;
    if (argc > 3 && strcmp(argv[2], "c") != 0)
    {
        id = atoi(argv[3]);
        if (id >= max_rows)
            die("There's not that many records.");
    }
    switch (action)
    {
    case 'c':
        max_rows = atoi(argv[3]);
        max_data = atoi(argv[4]);
        Database_create();
        Database_write();
        break;

    case 'g':
        if (argc != 4)
            die("Need an id to get");
        Database_get(id);
        break;

    case 's':
        if (argc != 7)
            die("Need id, name, email, sex to set");
        Database_set(id, argv[4], argv[5], atoi(argv[6]));
        Database_write();
        break;

    case 'd':
        if (argc != 4)
            die("Need an id to get");
        Database_delete(id);
        Database_write();
        break;

    case 'l':
        Database_list();
        break;

    default:
        die("Invalid action, only: c=create, g=get, s=set, d=del, l=list");
    }

    Database_close();

    return 0;
}

#include <stdio.h>

void first_way(int ages[], char *names[], int count) {
    int *cur_age = ages;
    char **cur_name = names;

    for (int i = 0; i < count; i++) {
        printf("%s has %d year alive.\n", *(cur_name + i), *(cur_age + i));
    }
    printf("---\n");
}

void second_way(int ages[], char *names[], int count) {
    int *cur_age = ages;
    char **cur_name = names;

    for (int i = 0; i < count; i++) {
        printf("%s has %d year alive.\n", cur_name[i], cur_age[i]);
    }
    printf("---\n");
}

void third_way(int ages[], char *names[], int count) {
    int *cur_age = ages;
    char **cur_name = names;

    while ((cur_age - ages) < count) {
        printf("%s has %d year alive.\n", *cur_name, *cur_age);
        cur_name++, cur_age++;
    }
    printf("---\n");
}

int main(int argc, char *argv[]) {
    int ages[] = {23, 43, 12, 89, 2};
    char *names[] = {"Alen", "Frank", "Marry", "John", "Lisa"};

    int count = sizeof(ages) / sizeof(int);

    for (int i = 0; i < count; i++) {
        printf("%s has %d year alive.\n", names[i], ages[i]);
    }
    printf("---\n");

    first_way(ages, names, count);
    second_way(ages, names, count);
    third_way(ages, names, count);

    int *cur_age = ages;
    char **cur_name = names;
    for (cur_name = names + count - 1, cur_age = ages + count - 1;
         (cur_age - ages) >= 0; cur_name--, cur_age--) {
        printf("%s has %d year alive.\n", *cur_name, *cur_age);
    }
    printf("---\n");

    for (int i = 0; i < count; i++) {
        printf("%p:%s %p:%d\n", names + i, *(names + i), ages + i,
               *(cur_age + i));
    }
    return 0;
}

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

// 定义结构体
struct Person{
    char *name;
    int age;
    int height;
    int weight;
};

// 创建并初始化结构体变量
struct Person *Person_create(char *name, int age, int height,int weight)
{
    // 申请一个size为sizeof(struct Person)的内存空间
    struct Person *who=malloc(sizeof(struct Person));
    // 确定该内存可用
    assert(who != NULL);
    // 对结构体元素进行赋值
    who->name=strdup(name); //使用strdup()函数进行字符串复制
    who->age=age;
    who->height=height;
    who->weight=weight;

    return who;
};

// 销毁结构体
void Person_destroy(struct Person *who){
    //确定地址空间可用
    assert(who != NULL);
    //释放who->name的内存
    free(who->name);
    //释放who的内存
    free(who);
}

// 打印结构体元素
void Person_print(struct Person *who){
    printf("Name: %s\n", who->name);
    printf("\tAge: %d\n", who->age);
    printf("\tHeight: %d\n",who->height);    
    printf("\tWeight: %d\n", who->weight);
}

int main(int argc, char **argv){
    //创建结构体变量
    struct Person *joe=Person_create("Joe Alex",32,64,140);
    struct Person *frank=Person_create("Frank Blank",20,72,180);

    printf("Joe is at memory location %p:\n",joe);
    printf("frank is at memory location %p:\n",frank);

    // 更改结构体元素
    joe->age+=20;
    joe->height-=2;
    joe->weight+=40;
    Person_print(joe);
    frank->age+=20;
    frank->weight+=20;
    Person_print(frank);

    //销毁结构体
    Person_destroy(joe);
    Person_destroy(frank);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STACKLENGTH 1024

char stack[STACKLENGTH];
int top = STACKLENGTH;

/*判断栈是否为空*/
int empty() {
    if (top == STACKLENGTH)
        return 1;
    return 0;
}

/*进栈*/
void push(char ch) {
    top--;
    stack[top] = ch;
}

/*出栈*/
char pop() {
    char ch = stack[top];
    top++;
    return ch;
}

int fun(char *str) {
    if (str[0] != '(' && str[strlen(str) - 1] != ')') {
        return 0;
    }
    while (*str != '\0') {
        char chLeft = '\0';
        char chRight = '\0';
        char ch = *str;
        switch (ch) {
        case '(':
            push(ch); // 找到左括号 进栈
            break;
        case ')':
            chRight = ch;
            break;
        default:
            break;
        }
        if (chRight == ch) // 找到右括号
        {
            if (empty()) {
                return 0;
            } else {
                char t = pop(); // 出栈
            }
        }
        str++;
    }
    if (empty()) {
        return 1;
    }
    return 0;
}

int main(void) {
    char array[1024];
    scanf("%s", array);
    int i = fun(array);
    if (i) {
        printf("括号匹配！\n");
    } else {
        printf("括号不匹配！\n");
    }
    return 0;
}
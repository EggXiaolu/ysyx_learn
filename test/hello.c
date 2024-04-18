#include <stdio.h>
#include <stdint.h>
int main()
{
    int32_t a=0x80000010;
    int32_t b=0xfffec674;
    printf("0x%08x\n",(a+b)&~1);
    return 0;
}


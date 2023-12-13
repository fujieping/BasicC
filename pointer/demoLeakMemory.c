#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER_SIZE 10

/* 内存泄漏:
   1，野指针
   2，malloc出堆空间没有被释放
   3，踩内存（）*/

int main()
{
    /* 什么情况会导致内存泄漏*/
#if 0    // case 1:野指针:char *p;
    int a;
    printf("a:%d\n", a);

    int array[BUFFER_SIZE];
    for (int idx = 0; idx < sizeof(array) / sizeof(int); idx++)
    {
        printf("%d\t", array[idx]);
    }
    char *p;
    printf("\n");
#endif

#if 0    // case2:malloc出堆空间没有被释放
    char *ptr = (char*)malloc(sizeof(char) * BUFFER_SIZE);
    if(!ptr)
    {
        /* todo...*/
        /* 状态码*/
        return -1;
    }
    /* 使用malloc分配的空间，数据是脏的（脏数据）*/
    memset(ptr, 0, sizeof(char) * BUFFER_SIZE);
#endif
#if 0/* 极度危险的函数*/
    strcpy(ptr,"hello world");
#else
    /* 使用安全 */
    char *ptr = NULL;
    strncpy(ptr,"hello world",BUFFER_SIZE - 1);
#endif
    printf("ptr:%c\n", *ptr);

    if(ptr)
    {
        free(ptr);
        ptr = NULL;
    }
    
    return 0;
}
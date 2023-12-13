#include <stdio.h>
#include <string.h>

int main()
{

    /* 指针和字符串*/
    char *ptr = "hello world";

    /* Q1:字符串常量？ 什么叫字符串常量*/

    /* 1,打印字符串的每一个字符*/
    /* way1: 使用for循环的方式*/
#if 0/* 字符串长度*/
    int len = strlen(ptr);
    printf("len:%d\n",len);
    char p = 0;
    for (int idx = 0; idx < strlen(ptr); idx++)
    {
        p = *ptr;
        printf("p:%c, idx:%d\n", p, idx);
        ptr++;

    }
#elif 0/* 打印字符串*/
    /* 实现方法1：*/
    int len = strlen(ptr);
    printf("len:%d\n",len);
    char p = '0';
    for (int idx = 0; idx < len; idx++)
    {
        p = *ptr;
        printf("p:%c, idx:%d\n", p, idx);
        ptr++;
    }

#elif 0
    /* 实现方法2：*/
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");
#endif

#if 1
    /* 3:给字符串赋值，*/
    char *ptr2 = NULL;
    char ptr1 = "zhangsan";
    printf("&(zhangsan):%p\n", &("zhangsan"));
    //strcpy(ptr1,"zhangsan")指针不能这样赋值
    printf("ptr:%p\n", ptr2);

#endif
    
    return 0;
}
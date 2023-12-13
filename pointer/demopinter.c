#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 32

/* 指针*/
int main()
{
#if 0 // 1,指针怎么定义；
    /* 定义变量，要初始化*/
    int a = 0;
    long b = 0;
    /* 指针定义*/
    int *p = NULL;
#endif

#if 0 /* 指针的使用,指针内存存放的是某变量的地址*/
    int a = 5;
    int *p = &a;//一级
    int **b = &p;//二级

    printf("a:%d\t", a);
    printf("&a:%p\t", &a);
    printf("*(&a):%d\n",*(&a));

    printf("p:%p\t", p);
    printf("*p:%d\t", *p);
    printf("&p:%p\n", &p);
    
    
    printf("b:%p\t", b);
    printf("*b:%p\t", *b);
    printf("*(*b):%d\t", *(*b));
    printf("&b:%p\n", &b);

#endif

#if 0 /*指针的特性：1，                                 \
     指针占用的内存大小是8个字节（64位系统） \
     如果是32位系统指针占用的内存大小是4个字节 */
    int a = 10;
    int len = sizeof(a);
    printf("len:%d\n", len);

    char p = 97;
    len = sizeof(p);
    printf("len:%d\n", len);

    char *ptr = &p;
    printf("%c\t%d\n", *ptr, *ptr);
    len = sizeof(ptr);
    printf("len:%d\n", len);

    int *ptrInt = &a;
    printf("*(&a):%d\n", *(&a));
    printf("*ptrInt:%d\n", *ptrInt);
    len = sizeof(ptrInt);
    printf("len:%d\n", len);

#endif

#if 0 /*指针的特性：2,*/
    /* 字符串是区别于字符数组的*/
    char *ptr = "hello world";
    int len = sizeof(ptr);
    printf("len:%d\n", len);

    /* 1，获取字符串的长度 */
    len = strlen(ptr);
    printf("len:%d\n", len);

    /* 2;字符数组的赋值，*/
    char name[BUFFER_SIZE] = { 0 };
    //name = "zhansan"数组不能这样赋值
    strcpy(name,"zhangsan");
    printf("name:%s\n", name);

    /* 3:给字符串赋值，*/
    char *ptr1 = NULL;
    ptr1 = "zhangsan";
    //strcpy(ptr1,"zhangsan")指针不能这样赋值
    printf("ptr:%s\n", ptr1);

#endif

#if 1/* 堆空间*/
    /* void* 是一个指针，这个指针是一个万能指针*/
    char *ptr =(char *)malloc(sizeof(char)*BUFFER_SIZE);
    strcpy(ptr,"zhangsan");
    printf("ptr:%s\n", ptr);

#endif
    return 0;
}
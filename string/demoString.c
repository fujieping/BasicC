#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 16

/* 作业：手写字符串函数*/
int main()
{
#if 0/* 字符数组初始化*/
    /* 字符数组*/
    char array[BUFFER_SIZE];
    /* 数组初始化*/
    memset(array, 0, sizeof(array));

    int len =sizeof(array);
    printf("len:%d\n",len);

#endif

#if 0/* 字符串 的相关函数（字符数组）*/
    char array[BUFFER_SIZE] = "hello world";

    /* 第一个 strlen获取字符串的长度*/
    int len = strlen(array);
    printf("len:%d\n",len);

    /* 第二个 strcpy拷贝字符串,用于给字符串数组赋值*/
    char name [BUFFER_SIZE];
    memset(name, 0, sizeof(name));
    strcpy(name,"zhangsan");
    printf("name:%s\n",name);

    /* 第三个 strcat字符串连接*/
    strcat(name,"is a boy");
    printf("name:%s\n",name);
    /* 第四个 strcmp字符串比较，返回0，则两个字符串相等*/
    char name2[BUFFER_SIZE]="wangwu";
    int ret = strcmp(name,name2);
    printf("ret:%d\n",ret);

    return 0;
#endif

#if 0/* 字符串*/
    /* 指针出入*/
    char * ptr = "hello world";
    int len = strlen(ptr);
    int size = sizeof(ptr);

    printf("len:%d\n",len);
    printf("size:%d\n",size);

    printf("*ptr:%c\t*(ptr+1):%c\n",*ptr,*(ptr+1));
    *ptr='H';
    printf("*ptr:%c\t*(ptr+1):%c\n",*ptr,*(ptr+1));

#endif

}
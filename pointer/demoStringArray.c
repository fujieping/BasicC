#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 5

int main()
{
#if 0//字符数组
    /* 数组的概念：
        1,一块连续的存储空间
        2，数组是存储相同的数据类型
        int array[10];
        char array[10];
        char *array[10];
        /*todo...结构体数组
        */
    /* 字符数组的内存在栈区*/
    char name[BUFFER_SIZE] = {0};
    memset(name, 0, sizeof(name));
    strncpy(name, "zhansan", sizeof(name)-1);
    printf("name:%s\n", name);

    printf("name[1]:%c\n", name[1]);
    name[1] = 'H';//可以修改
    printf("name:%s\n", name);

    /* 指针和数组是不分家的*/
    printf("*(name + 2):%c\n", *(name + 2));
    *(name + 2) = 'A';//也可以修改
    printf("name:%s\n", name);

    /* conclusion:
        1,指针和数组是不分家的。
            name[x] = *(name + x) x是常量 
    */
#endif

#if 0//字符串:内存在全局区
    char *ptr = "zhangsan";

    /* 指针和数组是不分家的*/
    printf("ptr[1]:%c\n", ptr[1]);

    printf("*(ptr + 2):%c\n", *(ptr + 2));

    ptr[0] = 'Z';//不能修改
    printf("ptr:%c\n", ptr[0]);

    /* conclusion:
        字符数组和字符串的区别：
        1，内存：字符数组内存存放在栈区，存储的值可以被修改。
                 字符串内存存放在常量区，不可以被修改。 
    */
#endif

#if 1//字符串数组
    char *array[BUFFER_SIZE] = { 0 };
    memset(array, 0, sizeof(array));
    array[0] = "zhangsan";
    array[1] = "lisi";
    array[2] = "wangwu";
    array[3] = "hello";
    array[4] = "world";

    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d] = %s\n", idx, array[idx]);
    }
    /* 字符串数组:
        1,它是一个数组
        2，存放的是字符串
    */
#endif


return 0;
}
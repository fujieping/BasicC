#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 5
/* 数组：1，一段连续的存储空间
         2，它里面存放的数据类型是相同的
*/
int main()
{
#if 0
    int array[BUFFER_SIZE] = {0};
#else
    int array[BUFFER_SIZE];
#endif
    /* 未清除*/
    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d]=%d\n", idx, array[idx]);
    }

    int len = sizeof(array);
    printf("len:%d", len);

    /* 地址*/
    /* 数组的(首)地址 和数组元素的首地址是一样的。*/
    printf("%p\n", &array[0]);
    printf("%p\n", &array[1]);
    printf("%p\n", &array[9]);
#if 0/* 进制*/
    /* 二进制*/
    /* 八进制*/
    /* 十进制*/
    /* 十六进制*/
    /* 0X34 = 3*16^1+4*16^0 */
#endif
#if 0/* 脏数据清除*/
    /* 清除脏数据*/
    memset(array, 0, sizeof(array));
    printf("================\n");
    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d]=%d\n", idx, array[idx]);
    }
#endif

    /* 数组的越界访问*/
    /* 判断索引的有效性*/
    printf("array[-1]=%d\n",array[-1]);
    printf("array[10]=%d\n",array[10]);
    
    return 0;
}
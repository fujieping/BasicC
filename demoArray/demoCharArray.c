#include <stdio.h>

#define BUFFER_SIZE 10

int main()
{
#if 0 /* 数组的大小计算*/
    char array[BUFFER_SIZE] = {0};

    //数组的大小
    int arraylen = sizeof(array);
    printf("arraylen:%d\n",arraylen);

    //数组元素的大小
    int elementlen = sizeof(array[0]);
    printf("elementlen:%d\n",elementlen);

    //获取数组的元素个数
    int length = arraylen / elementlen;
    printf("len:%d\n",elementlen);
#endif

#if 0 /* 什么叫字符*/
    /* 1: 什么叫字符？*/
    char pNum = 'a';
    printf("pNum:%c\n",pNum);

    /* 只要是指针的变量，变量定义第一个需要是p开头，*/
    char * ptr = "hello world";
    printf("ptr:%s\n",ptr);
#endif

#if 0 /* 字符数组*/

    /* 字符数组的初始化定义的两种方式*/
    char buffer1[] = "helloworld"; // 用双引号，末尾会默认有一个结束符'\0'
    // 用单引号，则末尾会没有结束符'\0'
    char buffer2[] = {'h', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd'};
    char buffer3[] = {'f','j','p'};

    /* 打印输出地址*/
    printf("buffer1:%p  buffer2:%p  buffer3:%p\n",buffer1,buffer2,buffer3);

    int buflen1 = sizeof(buffer1);
    int buflen2 = sizeof(buffer2);
    int buflen2 = sizeof(buffer3);

    printf("buflen1:%d  buflen2:%d\n", buflen1,buflen2);
    printf("buffer1:%s  buffer2:%s  buffer3:%s\n", buffer1,buffer2,buffer3);

#endif
    return 0;
}
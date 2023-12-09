#include<stdio.h>

int main()
{
    char buffer1[] = "helloworld";
    buffer1[0] = 'H';
    printf("buffer1:%s\tbuffer[0]:%c\n",buffer1,buffer1[0]);

    char * ptr ="helloworld";//存放在全局区/常量区，
    printf("ptr[0]:%c ptr[1]:%c\n",*(ptr+0),*(ptr+1));

    /* 为什么字符串不能改，因为字符串是常量，存放在全局区/常量区*/
    ptr[0]='H';
    

    return 0;
}
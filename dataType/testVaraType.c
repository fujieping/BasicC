#include <stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
#if 0
    long bigValue = 0; /* long 长整数，打印输出用%ld，*/
    int len = sizeof(bigValue);
    printf("len=%d bigValue=%ld\n", len, bigValue);

    /* 变量的命名：数字，字母，下划线。只能以字母下划线开头*/
    /* 数据类型对应的内存的存储空间*/
    int age = 5;       /* int 整形就是整数，打印输出用%d，*/
    len = sizeof(age); /* sizeof 计算字节的大小*/
    printf("hello world\n");
    printf("len=%d age=%d\n", len, age);

    short smallValue = 1; /* short 短整数，打印输出用%d，*/
    len = sizeof(smallValue);
    printf("len=%d smallValue=%d\n", len, smallValue);
#if 0
    /* 浮点数*/   /* float 浮点数，打印输出用%f，*/
    float weight =50.5;
    int end =sizeof(weight);
    printf("end=%d weigth=%f\n",len,weight);
#else
    double weight = 50.5; /* double 浮点数，打印输出用%f，*/
    int end = sizeof(weight);
    printf("end=%d weigth=%f\n", end, weight);
#endif

    char sex = 'm'; /* char 字符数，打印输出用%c*/
    len = sizeof(sex);
    printf("len=%d sex=%c\n", len, sex);
#endif

#if 0
    /* 有符号*/
    int b=-129;
    char sex = b; /* char 字符数，打印输出用%c*/
    int len = sizeof(sex);
    printf("len=%d sex=%c sex=%d\n", len, sex, sex);

    /* 无符号 和 有符号*/
    /* 有符号*/
    int a=256;
    char hm_value = a;
    len = sizeof(hm_value);
    printf("len=%d m_value=%c m_value=%d\n", len, hm_value, hm_value);

    /* 无符号*/
    unsigned char m_value = -1;
    len = sizeof(m_value);
    printf("len=%d m_value=%c m_value=%d\n", len, m_value, m_value);
#endif

#if 0
    /* 表达式 & 运算符*/
    /* 运算符 + - * / */
    int val=3-5*2;
    printf("val:%d\n",val);
    /* 括号的优先级最高*/

    /* 后置++和--*/
    val++;
    printf("val:%d\n",val);
    val--;
    printf("val:%d\n",val);

    /* 前置++和--*/
    ++val;
    printf("val:%d\n",val);
    --val;
    printf("val:%d\n",val);
#endif
#if 0
    int m_value=10;
    int discuss =m_value/3;
    int remainder=m_value%3;
    printf("discuss =%d\n",discuss);
    printf("remainder =%d\n",remainder);

    /* 随机数*/
    int randomVal=rand();
    printf("randomVal=%d\n",randomVal);
    /* 中奖率*/
#endif

#if 0
    /* 位运算*/
    int a=5<<1;/* 左移一位，相当于乘一个2*/
    printf("a=%d\n",a);

    /* 与或非*/
    int val =51;
    int orVal=val|7;    /*或*/
    int andVal=val&2;   /*与*/
    int notVal=!val;     /*非*/
    printf("orval=%d\n",orVal);
    printf("andVal=%d\n",andVal);
    printf("notVal=%d\n",notVal);
#endif

#if 0
    /* 与或非*/
    int condition1=1;
    int condition2=6;
    /*或；有一个满足，为真*/
    if((condition1==1)||(condition2==5))
    {
        printf("hello world\n");
    }
    else
    {
        printf("no hello world\n");
    }
    /* 与；两个满足，才为真1
    */
    if((condition1==1)&&(condition2==5))
    {
        printf("hello world\n");
    }
    else
    {
        printf("no hello world\n");
    }
#endif

/* 运算符：双目运算符&三目运算符*/
/* 双目运算*/

/* */
int 
    return 0;
}
#include <stdio.h>
#include "calculateFunc.h"
/* 源文件（.c）,函数实现*/

/* 状态码*/
typedef enum STATUS_CODE
{
    ON_SUCCESS,
    ON_ERROR = -5,
    ON_NULLPTR,
    ON_MALLOCFAIL,
    ON_INCALIDACCESS,
} STATUS_CODE;

/* 加法*/
int calculateAdd(int num1, int num2)
{
    int Sum = num1 + num2;
    return Sum;
}

/* 减法*/
int calculateSub(int num1, int num2)
{
    return num1-num2;
}

/* 乘法*/
int calculateAMul(int num1, int num2)
{
    int amass = num1 * num2;
    return amass;
}

/* 除法*/
int calculateDiV(int num1, int num2)
{
    if (num2 == 0)
    {
        return ON_INCALIDACCESS;
    }
    return num1 / num2;
}

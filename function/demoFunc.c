#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calculateFunc.h"

/* 函数参数：可有可无*/
/* 函数的返回值：可有可无，没有的情况写void,
    如果有，返回想要的数据类型（int long short ）*/

/* 什么叫API：接口*/
#if 0 /* 函数的定义*/

/* 1,没有参数没有返回值*/
void purchaseAppointThing()
{
    printf("purchase a phone\n");
}
#endif

#if 0 /* 2,有参数(一定有数据类型)，没有返回值*/

void myAddNum1(int num1, int num2)
{
    int sum = num1 + num2;
    printf("sum:%d\n", sum);
}
#endif

#if 0 /* 3,有参数(一定有数据类型)，有返回值*/

int myAddNum2(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}
#endif

#if 0/* 枚举,也是一种数据类型*/
typedef enum STATUS_CODE
{
    ON_SUCCESS,
    ON_ERROR,
    ON_NULLPTR,
    ON_MALLOCFAIL,
}STATUS_CODE;
/* 取别名，*/


#endif


int main()
{
    
    int num1 = 50;
    int num2 = 60;

    int sum = calculateAdd(num1,num2);
    printf("sum:%d\n",sum);

    return 0;

}

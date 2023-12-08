#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 状态码*/
enum STATUS_CODE
{
    RGISTER = 1,
    LOGIN,
    QUIT
};

/* 宏定义*/
/* 代码规范：宏必须全部大写*/
#define COUNT_NUM 10
#define RANGE_NUM 200

int main()
{
/* 判断语句*/
#if 0
int bugget=5000;
int appLepnone=8999;
int mi14Pro=4399;
int huaweiP60=6000;

if(bugget>appLepnone)
{
    printf("get a appLephone\n");
}
#endif

#if 0/*if语句*/
    int budget=5000;
    int minbudget=3000;
    int maxbudget=4000;

    int applephone=8999;
    int mi14Pro=4399;
    int huaweiP60=6000;

    /* 只要有一个条件被满足，那么就为1*/
    if(budget<applephone||budget>mi14Pro)
    {
        printf("i am happy\n");
    }
    else
    {
        printf("i am sad\n");
    }

    if(minbudget<budget&&budget<maxbudget)
    {
        printf("success get a phone\n");
    }
    else
    {
        printf("error get a phone\n");
    }

#endif

/* 代码规范1：一个函数尽量不要超过80行 最多不要超过120行*/
#if 0/*switch语句*/
    /* 坑1: 每一个case都需要有break;*/
    int choice=0;
    printf("请输入你的选项：");
    scanf("%d",&choice);
    /* switch*/
    switch (choice)
    {
    case RGISTER:
    {   /* 如果case里面的语句代码过多，一定要加上{}来包含*/
        printf("welcome to register\n");
    }
        break;
    case LOGIN:
    printf("welcome to login\n");   
        break;
    case QUIT: 
    printf("welcome to quit\n");
        break;
    default:
        printf("input choice invalid\n");
        break;
    }

#endif

#if 0/* for循环*/
    srand(time(NULL));

    
    /* for循环*/
    /* 代码规范:循环不允许使用i，循环条件不允许使用魔鬼数字*/
    int randomNum = 0;
    for(int idx=0;idx<COUNT_NUM;idx++)
    {
        randomNum = rand() % RANGE_NUM + 1;
        printf("randomNum:%d\n", randomNum);
    }
    /* */

#endif

#if 0/* while循环*/
    /* 编码规范：变量命名尽量使用驼峰式*/
    srand(time(NULL));
    int circleTimes =COUNT_NUM >> 1;
    int randomNum = 0;
    while(circleTimes--)
    {
        randomNum = rand() % RANGE_NUM + 1;
        printf("randomNum:%d\n", randomNum);
    }

#endif

#if 0
    /* 用处：*/
    int varaNum=0;
    do
    {
        printf("varaNum:%d",varaNum);
    }while()

#endif
    return 0;
}
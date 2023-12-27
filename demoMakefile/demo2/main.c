#include <stdio.h>

extern int add(int num1, int num2);
extern int mul(int num1, int num2);
extern int div(int num1, int num2);
extern int sub(int num1, int num2);

int main()
{
    int num1 = 100;
    int num2 = 20;

    int ret = add(num1, num2);
    printf("ret:%d\n", ret);
    return 0;
}
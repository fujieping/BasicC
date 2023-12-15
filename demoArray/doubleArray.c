#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 5
#define ROW 3
#define COLUMN 3

int main()
{
#if 1 /* 二维数组*/
    /* 从一维数组到二维数组*/
    int array[BUFFER_SIZE] = {0};
    int len = sizeof(array);
    printf("len:%d\n", len);

    /* 二维数组*/
    int array2[ROW][COLUMN] = {0};
    len = sizeof(array2);
    printf("len:%d\n", len);

    array2[0][0] = 100;
    printf("array2[0][0]:%d\n", array2[0][0]);

    int count = 1;
    /* 给二维数组赋值*/
    for (int idx = 0; idx < ROW; idx++)
    {
        for (int jdx = 0; jdx < COLUMN; jdx++)
        {
            array2[idx][jdx] = count;
            count++;
        }
    }
    /* 二维数组的取值*/
    int count1 = 0;
    for (int idx = 0; idx < ROW; idx++)
    {
        for (int jdx = 0; jdx < COLUMN; jdx++)
        {
            printf("array2[%d][%d]:%d\t", idx, jdx, array2[idx][jdx]);
            count1++;
            if (count1 % 4 == 0)
            {
                printf("\n");
            }
        }
    }
    printf("\n");
#endif

#if 0 /* 二维数组的地址*/
    printf("array[0]:%p\n", array2[0]);
    printf("array[0][0]:%p\n", &array2[0][0]);
    printf("array[1]:%p\n", array2[1]);
    printf("array[2]:%p\n", array2[2]);
    printf("\n");
    /* 数组既指针：array2[2][2] = **(array2 + 2) + 2 ；*/
    printf("%d   %d\n", array2[2][2], **(array2 + 2) + 2);

    /* 作业：二维数组的翻转*/
#endif

        return 0;
}
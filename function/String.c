#include <stdio.h>
#include "String.h"

int MYStrlen(char *ptr)
{
    int indx = 0;
    if(!ptr)
    {
        return indx;
    }
    while (*ptr != '\0')
    {
        indx++;
        ptr++;
    }
    return indx;
}

void MYStrcpy(char *ptr1, const char *ptr2)
{
    while (*ptr2 != '\0')
    {
        *ptr1 = *ptr2;
        ptr1++;
        ptr2++;
    }
    *ptr1 = '\0';
}

void MYStrcat(char *ptr1, const char *ptr2)
{
    while (*ptr1 != '\0')
    {
        ptr1++;
    }
    MYStrcpy(ptr1, ptr2);
}

int MYStrmpy(char *ptr1, char *ptr2)
{
    while (*ptr1 != '\0' && *ptr2 != '\0')
    {
        if(*ptr1!=*ptr2)
        {
            return *ptr1-*ptr2;
        }
        ptr1++;
        ptr2++;
    }
    return *ptr1-*ptr2;
}
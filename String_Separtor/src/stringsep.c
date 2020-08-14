#include "stringsep.h"
#include <stdio.h>
#include <string.h>
struct arr
{
char arr[100][100];
};

struct arr stringSeparator(char strInput[])
{
    //char split[100][100];
    struct arr result;
    int i,j=0,k=0;
    for(i=0;i<strlen(strInput);i++)
    {
        if(strInput[i]!='_')
        result.arr[j][k++]=strInput[i];
        else
        {
            j++;
            k=0;
        }
    }
    for(i=0;i<=j;i++)
    printf("%s \n",result.arr[i]);
    return result;
}


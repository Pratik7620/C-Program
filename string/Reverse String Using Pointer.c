#include<stdio.h>
int main()
{
    char arr[100],*ptr;
    int i,len;

    printf("\n Enter The String --> ");
    gets(arr);
    ptr=arr;

    for(i=0;i<100;i++)
    {
        if(*ptr=='\0')
            break;
        ptr++;
    }

    len = i;
    ptr--;
    printf("\n Rversed String Is --> ");

    for(i=len;i>0;i--)
    {
        printf("%c",*ptr--);
    }
    return 0;
}

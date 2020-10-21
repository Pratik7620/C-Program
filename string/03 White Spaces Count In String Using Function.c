#include<stdio.h>
#include<conio.h>

int W_Space_Count(char *);

int main()
{
    char cSrc[20]="";
    int Count = 0;

    printf("\n Enter The String :");
    gets(cSrc);

    Count = W_Space_Count(cSrc);

    printf("\n White Spaces Count in Given String Is :%d.",Count);

    getch();
    return 0;
}
int W_Space_Count(char *Str)
{
    int cnt =0,i=0;

    while(Str[i]!='\0')
    {
        if(Str[i] = " ")
        {
            cnt++;
        }
        i++;
    }

    return cnt;
}



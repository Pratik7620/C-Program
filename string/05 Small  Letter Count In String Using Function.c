#include<stdio.h>
#include<conio.h>

int Small_Letter_Count(char *);

int main()
{
    char cSrc[20]="";
    int Small_Count = 0;

    printf("\n Enter The String :");
    gets(cSrc);

    Small_Count=Small_Letter_Count(cSrc);

    printf("\n Small Letter Count in Given String Is :%d.",Small_Count);

    getch();
    return 0;
}
int Small_Letter_Count(char *Str)
{
    int cnt =0,i=0;

    while(Str[i]!='\0')
    {
        if(Str[i]>='a' && Str[i]<='z')
        {
            cnt++;
        }
        i++;
    }

    return cnt;
}



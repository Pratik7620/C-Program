#include<stdio.h>
#include<conio.h>

int Cap_Letter_Count(char *);

int main()
{
    char cSrc[20]="";
    int Cap_Count = 0;

    printf("\n Enter The String :");
    gets(cSrc);

    Cap_Count=Cap_Letter_Count(cSrc);

    printf("\n Capital Letter Count in Given String Is :%d.",Cap_Count);

    getch();
    return 0;
}
int Cap_Letter_Count(char *Str)
{
    int cnt =0,i=0;

    while(Str[i]!='\0')
    {
        if(Str[i]>='A' && Str[i]<='Z')
        {
            cnt++;
        }
        i++;
    }

    return cnt;
}



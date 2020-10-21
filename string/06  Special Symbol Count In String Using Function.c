#include<stdio.h>
#include<conio.h>

int S_Symbol_Letter_Count(char *);

int main()
{
    char cSrc[20]="";
    int S_Symbol_Count = 0;

    printf("\n Enter The String :");
    gets(cSrc);

    S_Symbol_Count=S_Symbol_Letter_Count(cSrc);

    printf("\n Special Symbol Count in Given String Is :%d.",S_Symbol_Count);

    getch();
    return 0;
}
int S_Symbol_Letter_Count(char *Str)
{
    int cnt =0,i=0;

    while(Str[i]!='\0')
    {
        if(!((Str[i]>='a' && Str[i]<='z') || (Str[i]>='A' && Str[i]<='Z') || (Str[i]>='0' && Str[i]<='9') || (Str[i]==' ')))
        {
            cnt++;
        }
        i++;
    }

    return cnt;
}



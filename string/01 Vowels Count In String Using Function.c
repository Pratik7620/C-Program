#include<stdio.h>
#include<conio.h>

int V_Count(char *);

int main()
{
    char cSrc[20]="";
    int Count = 0;

    printf("\n Enter The String :");
    gets(cSrc);

    Count = V_Count(cSrc);

    printf("\n Vowels Count in Given String Is :%d.",Count);

    getch();
    return 0;
}
int V_Count(char *Str)
{
    int cnt =0,i=0;

    while(Str[i]!='\0')
    {
        if(Str[i]=='a' || Str[i]=='e' || Str[i]=='i' || Str[i]=='o' || Str[i]=='u' || Str[i]=='A' || Str[i]=='E' || Str[i]=='I' || Str[i]=='O' || Str[i]=='U')
        {
            cnt++;
        }
        i++;
    }

    return cnt;
}


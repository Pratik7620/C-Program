#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[50]={'\0'};
    int len=0;

    printf("\n Enter a String :");
    gets(cSrc);

    while(cSrc[len]!='\0')
    {
        len++;
    }

    printf("\n Length Of Given String Is = %d ",len);

    getch();
    return 0;
}

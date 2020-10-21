#include<stdio.h>
#include<conio.h>

int strrevX(char*,char*);

int main()
{
    char cSrc[20]="";
    char cDest[20]="";
    int i=0,j=0;

    printf("\n Enter a String :");
    gets(cSrc);

    while(cSrc[i]!='\0')
    {
        i++;
    }
    i=i-1;

    while(i>=0)
    {
        cDest[j] =cSrc[i];
        j++;
        i--;
    }
    cDest[i]!='\0';

    printf("\n Source String Is = %s",cSrc);
    printf("\n Reverse String Is = %s",cDest);

    getch();
    return 0;
}

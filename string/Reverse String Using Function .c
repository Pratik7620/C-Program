#include<stdio.h>
#include<conio.h>

int strrevX(char*,char*);

int main()
{
    char cSrc[20]="";
    char cDest[20]="";

    printf("\n Enter a String :");
    gets(cSrc);

    strrevX(cSrc,cDest);

    system("cls");

    printf("\n Source String Is = %s",cSrc);
    printf("\n Reverse String Is = %s",cDest);

    getch();
    return 0;
}
int strrevX(char *instr, char *outstr)
{
    int i=0,j=0;

    while(instr[i]!='\0')
    {
        i++;
    }
    i=i-1;

    while(i>=0)
    {
        outstr[j] = instr[i];
        j++;
        i--;
    }
    outstr[i]!='\0';

    return ;
}

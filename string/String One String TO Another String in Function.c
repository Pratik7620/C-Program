#include<stdio.h>
#include<conio.h>

int strcpyX(char*,char*);

int main()
{
    char cSrc[20]="";
    char cDest[20]="";

    printf("\n Enter a String :");
    gets(cSrc);

    strcpyX(cSrc,cDest);

    system("cls");

    printf("\n Source String Is = %s",cSrc);
    printf("\n Copied String Is = %s",cDest);

    getch();
    return 0;
}
int strcpyX(char *instr, char *outstr)
{
    int i=0;

    while(instr[i]!='\0')
    {
        outstr[i]=instr[i];
        i++;
    }
    outstr[i]!='\0';

    return ;
}

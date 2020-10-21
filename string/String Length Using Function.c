#include<stdio.h>
#include<conio.h>

int strlenX(char *);

int main()
{
    char cSrc[20]={'\0'};
    int len=0;

    printf("\n Enter a String :");
    gets(cSrc);

    len = strlenX(cSrc);

    system("cls");

    printf("\n Length Of Given String Is = %d ",len);

    getch();
    return 0;
}
int strlenX(char *cPtr)
{
    return printf("%s",cPtr);
}

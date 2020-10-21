#include<stdio.h>
#include<conio.h>

int Toggle_Case(char *);

int main()
{
    char cArr[50]={'\0'};

    printf("\n Enter The String:");
    scanf("%[^\n]",&cArr);

    Toggle_Case(cArr);

    printf("\n Output String With Alternate Case Toggled In Source String Is:%s",cArr);

    getch();

    return 0;
}
int Toggle_Case(char *src)
{
    int i=1;

    while(*src!='\0')
    {
        if(i%2==0)
        {
            if((*src>='A')&&(*src<='Z'))
            {
                *src=*src+32;
            }
        }
        else
        {
             if((*src>='a')&&(*src<='z'))
             {
                  *src=*src-32;
             }
        }
        src++;
        i++;
    }
}

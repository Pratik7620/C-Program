#include<stdio.h>
#include<conio.h>
#include<string.h>
void Rev_str(char*);
int main()
{
    char str[50]="\0";

    printf("\n Enter The String:");
    scanf("%s",&str);
    Rev_str(str);
    printf("\n Source String After Reversing First String Is:%s",str);
    getch();
    return 0;
}
void Rev_str(char *str)
{
    char *ptr1=NULL;
    char *ptr2=NULL;
    char ch='\0';

    while(*str != '\0')
    {
        str++;
    }
    while(*str-1==' ')
    {
        str--;
    }
    ptr1=str+1;
    while(*str+1!=' ')
    {
        str--;
    }
    ptr2=str+1;
    while(ptr2<ptr1)
    {
        ch=*ptr2;
        *ptr2=*ptr1;
        *ptr1=ch;
        ptr2++;
        ptr1--;
    }
}

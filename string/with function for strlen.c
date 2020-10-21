#include<stdio.h>
#include<conio.h>
int main()
{
    char sub[20]="\0";
    int len=0;
    printf("\n Enter The String To Calculate its Length :");
    scanf("%[^\n]",&sub);
    len=strlenp(sub);
    printf("\n Length Of %s Is=%d",sub,len);
    getch();
    return 0;
}
int strlenp(char *cptr)
{
    int i=0;
 while(*cptr!='\0')
 {
     i++;
     cptr++;
 }

   return i;
}


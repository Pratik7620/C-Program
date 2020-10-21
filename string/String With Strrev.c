#include<stdio.h>
#include<conio.h>
int main()
{
    char source[20];
    char dest[20];

    printf("\n Enter The Reverse String:");
    gets(source);
    strrevp(source , dest);
    printf("\n String After Reverce=%s",dest);
    getch();
    return 0;
}
int strrevp(char *src,char *dst)
{
    int len=0;
    //astrrevp(*src);
    src=src+(len-1);
 while(len>0)
 {
     *dst=*src;
     dst++;
     src--;
     len--;
 }
 *dst='\0';
}


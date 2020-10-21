#include<stdio.h>
#include<conio.h>
int main()
{
    char source[20]="\0";
    char dest[20];
    printf("\n Enter The %s Is:,src");
    scanf("%[^\n]",&src);
    printf("\n dest String Before copy = %s",dest);
    strcpyp(source,dest);
    printf("\n Length Of %s Is=",dest);
    getch();
    return 0;
}
void strcpyp(char *src,char *dest)
{
 while(*src!='\0')
 {
  *dest=*src
  src++;
  dest++;
 }
 *dst='\0'
}


#include<stdio.h>
#include<conio.h>

void Convert_Lower(char *);

int main()
{
    char cSrc[20]="";

    printf("\n Enter The String :");
    gets(cSrc);

    Convert_Lower(cSrc);

    printf("\n Given String Is After Conversion :%s.",cSrc);

    getch();
    return 0;
}
void Convert_Lower(char *Str)
{
    int i=0;

    while(Str[i]!='\0')
    {
        if(Str[i]>='a' && Str[i]<='z')
        {
            Str[i] = Str[i]-32;
        }
        i++;
    }

    return;
}




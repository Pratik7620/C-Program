#include<stdio.h>
#include<conio.h>

void Convert_Uppear(char *);

int main()
{
    char cSrc[20]="";

    printf("\n Enter The String :");
    gets(cSrc);

    Convert_Uppear(cSrc);

    printf("\n Given String Is After Conversion :%s.",cSrc);

    getch();
    return 0;
}
void Convert_Uppear(char *Str)
{
    int i=0;

    while(Str[i]!='\0')
    {
        if(Str[i]>='A' && Str[i]<='Z')
        {
            Str[i] = Str[i]+32;
        }
        i++;
    }

    return;
}



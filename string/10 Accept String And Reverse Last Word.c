#include<stdio.h>
#include<conio.h>

void Rev_Each_Words(char *);

int main()
{
    char cSrc[20]="";

    printf("\n Enter The String :");
    gets(cSrc);

    Rev_Each_Words(cSrc);

    printf("\n After Reversing Each Word => %s.",cSrc);

    getch();
    return 0;
}
void Rev_Each_Words(char *inStr)
{
    int i=0;
    char *p1 = NULL;
    char *p2 = NULL;


    while(inStr[i]!='\0')
    {
        if(inStr[i]==' '|| inStr[i]=='.' || inStr[i]==',')
        {
            i++;
            continue;
        }
        p1 = inStr + i;

        while(inStr[i]!=' '&&inStr[i]!='\0'&&inStr[i]!='.'&&inStr[i]!=',')
        {
            i++;
        }

        p2 = inStr + i - 1;
    }
     while(p1 < p2)
        {
            char ch = *p1;
            *p1 = *p2;
            *p2 = ch;

            p1++;
            p2--;
        }
    return;
}





#include<stdio.h>
int main()
{
    char ch[100];
    int upper=0,lower=0;
    int i;

    printf("\n Enter The String --> ");
    gets(ch);

    i=0;
    while(ch[i]!='\0')
    {
        if(ch[i]>='A' && ch[i]<='Z')
        {
            upper++;
        }

        if(ch[i]>='a' && ch[i]<='z')
        {
            lower++;
        }
        i++;
    }
    printf("\n Uppercase Letters : %d",upper);
    printf("\n Lowercase Letters : %d",lower);
    return 0;

}


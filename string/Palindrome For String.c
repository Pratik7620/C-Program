#include<stdio.h>
#include<string.h>
int main()
{
    char str[20] = "";
    int l,i;

    printf("\n Enter The String: ");
    gets(str);

    l = strlen(str);

    for(i=0;i<l/2;i++)
    {
        if(str[i]!=str[l-1-i])
        {
            printf("\n  Not Pallindrome");
            break;
        }
    }
    if(i==l/2)
    {
        printf("\n  pallindrome");
    }
    return 0;
}


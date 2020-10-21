
#include<stdio.h>
#include<string.h>
main()
{
    char str[20];

    printf("\n Enter The String: ");
    gets(str);
    if(ispalindrome(str))
    {
        printf("\n Palindrome");
    }
    else
    {
        printf("\n Not Palindrome");
    }
}
int ispalindrome (char s[])
{
    int l,i;
     l = strlen(s);

    for(i=0;i<l/2;i++)
    {
        if(s[i]!=s[l-1-i])
        {
            return (0);
        }
return (1);
}
}

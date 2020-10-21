#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b, temp;
    a=b=temp=0;
    printf("\n\t================================================\t");

    printf("\n\t************Enter two numbers:************`\n");
    scanf("%d%d",&a,&b);
    printf("\n\tnumber before swapping a=%d\n b=%d\n",a,b);

    temp=a;
    a=b;
    b=temp;
    printf("\n\tnumber after swapping a=%d\n b=%d\n",a,b);
    printf("\n\t==================================================\n");

    getch();
}

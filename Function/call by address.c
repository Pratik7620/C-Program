#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo=0;
    printf("\n Enter The Number:");
    scanf("%d",&iNo);

    printf("\n Value Of N0=%d",iNo);
         fun(&iNo);
    printf("\n Value Of No After function call=%d",iNo);
       getch();
       return 0;
}
void fun (int *iptr)
{
    *iptr++;
}


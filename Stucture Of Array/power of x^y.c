#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo1=0,iNo2=0;
    printf("\n========================================================================\n");

    printf("\n Enter The First Number Raies To Second Number:");
    scanf("%d%d",&iNo1,&iNo2);

    printf("\n power((%d)^%d)=%d",iNo1,iNo2,power(iNo1,iNo2));
    printf("\n========================================================================\n");

    getch();
    return 0;

}
    int power(int n1,int n2)
    {

        int power=1;
        for(;n2>0;n2--)
        {
           power=power*n1;
        }
        return power;
    }



#include<stdio.h>
#include<conio.h>
int main()
{
        int iNo=0,sum=0,Temp=0,dig=0;
        printf("\n======================================================\n");

        printf("\n*****************Enter The Integer**********************");
        scanf("%d",&iNo);

        Temp=iNo;
        while(Temp !=0)
        {
            dig=Temp%10;
            sum=sum+dig*dig*dig;
            Temp=Temp/10;
        }

        printf("\n Given Number %d Is=%s",iNo,(iNo==sum)?"Armostrong":"Not armostrang");

        printf("\n===============================================================\n");
        getch();
        return 0;
}























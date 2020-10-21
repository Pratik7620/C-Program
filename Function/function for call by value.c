#include<stdio.h>
#include<conio.h>
int main()
{
    int No=17;
    printf("\n value of Number before calling fun()=%d",No);
    fun(No);
    printf("\n value of Number after calling fun()=%d",No);
    getch();
    return 0;
}
void fun(int num)
{
    num++;
    printf("\n Inside The fun num =%d",num);
}

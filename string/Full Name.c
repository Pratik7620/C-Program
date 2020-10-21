#include <stdio.h>
#include<conio.h>

int main()

{
    char name[50] = "\0";
    char F_name[50] = "\0";
    char M_name[50]= "\0";
    char L_name[50]= "\0";
    char * ptr = NULL;
    int count =0; int i,j,k,l;
    j=k=l=0;

printf("\n ===============================********===============================\n");

    printf("\n Enter you full name: ");
    gets(name);

    for(i=0; i<strlen(name); i++)
        {
    if(name[i] == ' ')
        {
            count++;
        }
    if(count ==0)
        {
            F_name[j++] = name[i];
        }

    if(count ==1)
        {
            M_name[k++] = name[i];
        }

    if(count ==2)
        {
            L_name[l++] = name[i];
        }

    }

printf("\n ===============================********===============================");

    printf("\n\t F_name : %s", F_name);

        if(strlen(L_name)==0)
            {
               printf("\n\n\t L_name : %s", M_name);
            }
            else
            {
                printf("\n\n\t M_name : %s", M_name);
                printf("\n\n\t L_name : %s", L_name);
            }

printf("\n ===============================********===============================\n");

    printf("\n\t\t\t Thank You \n ");

    getch();
    return 0;
    }

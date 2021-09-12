// ATM machine simple program
#include<stdio.h>

int main()
{   system("cls");
    int i, choice;
    float cash=0;
    char c;
    do{
        printf("**************************************************************************\n");
        printf("\n Enter\n\n 1.Withdraw\n\n 2.Deposite\n\n 3.Balance Enquiey\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                int withdraw;
                printf("\nEnter amount to withdraw");
                scanf("%d",&withdraw);
                if(withdraw%100==0)
                {
                    if(cash>=withdraw)
                    {
                        cash=withdraw;
                        printf("\n Amount after withdraw of cash %f\n",cash);
                    }
                    else
                    {
                        printf("\n You do not have sufficient balance. Please deposite\n");
                    }
                }
                else
                {   printf("\n Enter withdraw amount in 100's \n");

                }
                break;
            }
            case 2:
            {
                int deposite;
                printf("\n Enter amount to deposite \n");
                scanf("%d",&deposite);
                if(deposite%100==0)
                {
                    cash=cash+deposite;
                    printf("\n Balance after deposite amount is %f\n",cash);
                }
                else
                {   printf("\n Please Enter amount in 100's\n");

                }
                break;
            }
            case 3:
            {
                printf("\n Balance in account is %.2f \n",cash);
                break;
            }
            default:
            {
                printf("\nEnter a valid choice\n");
                break;
            }
        }
    
        printf("\n\n To continue 'y' else Any letter \n ");
        fflush(stdin);
        scanf("%c",&c);
    }
    while(c=='y'||c=='Y');
    {   
        printf("\n ThankYou for using ATM ");
    }

    return 0;
}           
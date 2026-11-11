#include<stdio.h>
int main(){
    int choice;
    float balance=5000,amount;

    printf("\n____ATM MENU SYSTEM____");
    printf("1.check a balance\n");
    printf("2.diposit money\n");
    printf("3.withdraw money");
    printf("4.exit\n");
    
    printf("enter a choice");
    scanf("%d\n",&choice);
    
    switch(choice){
        case 1:
        printf("balance=Rs.%2f",balance);
        break;
        
        case 2:
        printf("enter a diposit amount: ");
        scanf("%f\n",&amount);
        if(balance>0){
            balance+=amount;
            printf("new balance=Rs.%2f",balance);
        } else {
            printf("invalid amount");
        }
        break;
        case 3:
        printf("enter a withdraw amount: ");
        scanf("%f\n",&amount);
        if(amount<=0){
            printf("invalid amount");
        } else if(amount>balance){
            printf("insufficient balance");
        } else {
            balance-=amount;
            printf("new balance = Rs.%2f",balance);
        }
        break;
        
        case 4:
        printf("thank you using atm");
        break;
        default:
        printf("invalid choice");
        break;

    }




    return 0;
}
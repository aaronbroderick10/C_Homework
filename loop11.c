#include <stdio.h>

int main(){
    int balance = 0;
    int choice;
    printf("Welcome to the ATM!\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    do{
        printf("Enter your choice: ");
	scanf("%d", &choice);
	switch(choice){
	    case 1:
	        printf("Your balance is $%d.\n", balance);
		break;
	    case 2:
		printf("Enter your deposit amount: ");
		int deposit;
		scanf("%d", &deposit);
		balance += deposit;
		printf("Deposit successful. Your new balance is $%d.\n", balance);
		break;
	    case 3:
		printf("Enter your withdraw amount: ");
		int withdraw;
		scanf("%d", &withdraw);
		balance -= withdraw;
		printf("Withdraw successful. Your new balance is $%d.\n", balance);
		break;
	    case 4:
		printf("Thank you for using the ATM\n");
		break;
	    default:
		printf("Invalid option\n");
	}
    }
    while(choice != 4);
    return 0;
}

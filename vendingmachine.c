#include <stdio.h>

int main(){

    printf("Menu:\n");
    printf("1. Soda - $1.50\n");
    printf("2. Water - $1.00\n");
    printf("3. Chips - $2.00\n");
    printf("4. Candy - $1.25\n");
    int choice;
    printf("Select your choice: ");
    scanf("%d", &choice);

    switch (choice) {
	case 1:
	    printf("1. Soda - $1.50\n");
	    break;
	case 2:
	    printf("2. Water - $1.00\n");
            break;
	case 3:
	    printf("3. Chips - $2.00\n");
            break;
	case 4:
	    printf("4. Candy - $1.25\n");
	    break;
	default:
	    printf("Invalid selection.");
    }

    return 0;
}

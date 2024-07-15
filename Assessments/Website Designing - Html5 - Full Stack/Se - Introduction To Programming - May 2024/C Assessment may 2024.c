//C Programming Assessment Test
  //Write a program to demonstrate a Food Billing System.

#include<stdio.h>

int main() {
    // Variables Declaration
    int choice, quantity, Amount, totalamt=0, i; // Initialize totalamt to zero
    char choice2;

    // Loop for menu option
    for(i = 0; i <= 10; i++) {
        // menu options
        printf("\n----------Menu----------\n");
        printf("1. Pizza \t price = 180rs/pcs \n");
        printf("2. Burger \t price = 100rs/pcs \n");
        printf("3. Dosa  \t price = 120rs/pcs \n");
        printf("4. Idli \t price = 50rs/plate \n");
		printf("5. MoMo \t price = 80rs/plate \n");
		printf("6. Samosa \t price = 30rs/plate \n");
		printf("7. Poha \t price = 40rs/plate \n");
		printf("8. Fafda \t price = 50rs/plate \n");
		printf("9. Jalebi \t price = 30rs/plate \n");
		printf("10. khaman \t price = 30rs/plate \n");		
        // Asking user for choice
        printf("Please Enter your choice... :");
        scanf("%d", &choice);

        // User's choice Process
        switch(choice) {
            case 1:
                printf("You have selected pizza\n");
                break;
            case 2:
                printf("You have selected burger\n");
                break;
            case 3:
                printf("You have selected dosa\n");
                break;
            case 4:
                printf("You have selected idli\n");
                break;
			case 5:
                printf("You have selected MoMo\n");
                break;
            case 6:
                printf("You have selected Samosa\n");
                break;    
			case 7:
                printf("You have selected Poha\n");
                break;
            case 8:
                printf("You have selected Fafda\n");
                break;
            case 9:
                printf("You have selected Jalebi\n");
                break;
            case 10:
                printf("You have selected Khaman\n");
                break;
        
		    default:
                printf("Invalid Choice...\n");
                continue; // Restart the loop if choice is invalid
        }

        // Asking user for quantity
        printf("Enter the quantity : ");
        scanf("%d", &quantity);
        Amount = 0;

        // Amount Calculation based on user's choices and quantity
        
		switch(choice) {
            case 1:
                Amount = 180 * quantity;
                break;
            case 2:
                Amount = 100 * quantity;
                break;
            case 3:
                Amount = 120 * quantity;
                break;
            case 4:
                Amount = 50 * quantity;
                break;
			case 5:
                Amount = 80 * quantity;
                break;
            case 6:
                Amount = 30 * quantity;
                break;
			case 7:
                Amount = 40 * quantity;
                break;
            case 8:
                Amount = 50 * quantity;
                break;
            case 9:
                Amount = 30 * quantity;
                break;
            case 10:
                Amount = 30 * quantity;
                break;
        }

        // Display Amount for the current order
        printf("Amount : %d\n", Amount);

        // Update the total amount
        int result = totalamt += Amount;
        printf("Total amount: %d\n", result);


        // Ask user if they want to place more orders
        printf("Do you want place more orders ? y or n : ");
        scanf(" %c", &choice2); // Notice the space before %c to consume any trailing whitespace

        // Check user's response
        if(choice2 == 'n' || choice2 == 'N') {
            // Display the total amount and exit the loop if user doesn't want to place more orders
            printf("Final Bill\n");
			printf("Total amount: %d\n", result);
            break; 
        } else if (choice2 != 'y' && choice2 != 'Y') {
            // Display an error message and exit the loop if an invalid choice is entered
            printf("Invalid choice.(Choice should be only y or n)\n");
            continue; 
        }
    }
    
}


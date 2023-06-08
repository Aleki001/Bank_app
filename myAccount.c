#include "app.h"

void myAccount(double balance, const char* password)
{
        int option, delay = 2;

        while (1)
        {
                system ("clear");

                printf("\t\t\t M-Bank\n\n");
                printf("MENU:\n");
		printf(" 1. Check Balance\n");
		printf(" 2. Mini Statement\n");
                printf(" 00. Back\n\n");

                printf("\nSelect an option: ");
		scanf(" %d", &option);
                printf("\n");

                switch (option)
                {
                        case 1:
                                checkBalance(balance, password);
                                break;
                        case 2:
                                miniStatement(password);
                                break;
                        case 00:
                                return;
                        default:
                                printf("\nInvalid option. Please try again.\n\n");
                                getchar(); /*This will clear the newline character from the input buffer*/
                                break;
                }
                sleep(delay);

        }
}
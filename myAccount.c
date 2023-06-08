#include "app.h"

void myAccount(double balance)
{
        int option;

        while (1)
        {
                system ("clear");

                printf("\t\t\t M-Bank\n\n");
                printf("MENU:\n");
		printf(" 1. Check Balance\n");
		printf(" 2. Mini Statement\n");
                printf(" 00. Back");

                printf("\nSelect an option: ");
		scanf(" %d", &option);

                switch (option)
                {
                        case 1:
                                checkBalance(balance);
                        break;
                        case 2:
                                miniStatement();
                        break;
                        case 00:
                                return;
                        default:
                                printf("\nInvalid option. Please try again.\n\n");
                        break;
                }

        }
}
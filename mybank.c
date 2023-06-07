#include "app.h"

int main()
{
	char password[20];
	int passwordCorrect = 0;
	double lastTransferAmount = 0.0;
	int delay = 5;

	/*Greeting Message*/
	printf("\n\t\tHello, Welcome to M-Bank. With us, Banking has been made easy.\n");

	/*Create an account - implementing registration*/
	createAccount();

	/*Register using password and validate*/
	printf("  Create a password: ");
	scanf("%s", password);

	passwordCorrect = validatePassword(password); /*validates the password*/

	
	
	char option;
	double balance = 0.0;

	if (passwordCorrect)
	{
		while (1)
		{
			system("clear");

			printf("\t\tWelcome to M-Bank. Banking Made Easy :)\n\n");
			printf("MENU:\n");
			printf(" 1. Transfer Money\n");
			printf(" 2. Deposit Money\n");
			printf(" 3. Withdraw Cash\n");
			printf(" 4. Check Balance\n");
			printf(" 5. Close App\n");
		

			printf("\nSelect an option: ");
			scanf(" %c", &option);

			switch (option)
			{
				case '1': 
					printf("\n\n\t Transfer money\n\n");
					transferMoney(&balance, &lastTransferAmount);
					break;
				case '2':
					printf("\n\n\t Deposit money\n\n");
					depositMoney(&balance);
					break;
				case '3':
					printf("\n\n\t Withdraw money\n\n");
					withdrawCash(&balance);
					break;
				case '4':
					printf("\n\n\tChecking balance...\n\n");
					checkBalance(balance);
					break;
				case '5':
					return (0);
				default:
					printf("\nInvalid option. Please try again.\n\n");

			}
			sleep(delay);
		}
	}




	return (0);
}

#include "app.h"

int main()
{
	char password[20];
	int passwordCorrect = 0;
	double lastTransferAmount = 0.0;

	/*Greeting Message*/
	printf("\nHello, Welcome to myBank. With us, Banking has been made easy.\n");

	/*Create an account - implementing registration*/
	createAccount();

	/*Register using password and validate*/
	printf("Create a password: ");
	scanf("%s", password);

	passwordCorrect = validatePassword(password); /*validates the password*/

	
	
	char option;
	double balance = 50000.0;

	if (passwordCorrect)
	{
		printf("Your password is correct. Welcome to instant banking with myBank \nYou have a fixed amount of 50,000. What do you want to do with it? \n\n");

		while (1)
		{
			printf("Menu:\n");
			printf("a. Transfer Money\n");
			printf("b. Deposit Money\n");
			printf("c. Check Balance\n");
			printf("d. Quit the app\n\n");
		

			printf("Select an option: ");
			scanf(" %c", &option);

			switch (option)
			{
				case 'a': 
					printf("Option a: Transfer money\n");
					transferMoney(&balance, &lastTransferAmount);
					break;
				case 'b':
					printf("Option b: Deposit money\n");
					/* add code to deposit money*/
					break;
				case 'c':
					printf("Option c: Check balance\n");
					/* add code to check balance*/
					break;
				case 'd':
					printf("Option d: Quit the app\n");
					return (0);
				default:
					printf("Invalid option. Please try again.\n");

			}
		}
	}




	return (0);
}

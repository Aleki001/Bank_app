#include <stdio.h>
#include <string.h>

int main()
{
	/*Greeting Message*/
	printf("\nHello, Welcome to myBank. With us, Banking has been made easy.\n");

	/*Create an account - implementing registration*/
	char firstName[50], lastName[50];

	printf("Please create an account\nEnter your first and last name here: ");
	scanf("%s %s", firstName, lastName);

	char pass[20];
	char val[20];
	int value;
	int i = 3;
	int passwordCorrect = 0; /*Flag variable to correct password validation*/

	printf("Create a password: ");
	scanf("%s", pass);
	printf("Confirm password: ");
	scanf("%s",val);

	value = strcmp(pass, val);

	if (value != 0)
	{
		while (i >= 0)
		{
			printf("\n YOur passwords dont match");
			printf("Try again, Re-enter Password: ");
			scanf("%s", val);

			value = strcmp(pass, val);

			if (value == 0)
			{
				passwordCorrect = 1;
				break;
			}
			if (i > 0)
				printf("Passwords dont match. You have %d more attempts", i);
			else
				printf("Sorry you cant create an account.");


			i--;
		}

	}
	else
		passwordCorrect = 1;

	
	char option;
	double balance = 50000.0;

	if (passwordCorrect)
	{
		printf("Your password is correct. Welcome to instant banking with myBank \n You have a fixd amount of 50,000. What do you want to do with it? \n");

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
					/* add code to transfer money*/
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
					break;
				default:
					printf("Invalid option. Please try again.\n");

			}
		}
	}




	return (0);
}

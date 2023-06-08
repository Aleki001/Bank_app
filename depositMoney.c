#include "app.h"

void depositMoney(double* balance, const char* password)
{
	double depositAmount;

	 /*Getting current time*/
	time_t t = time(NULL);
	struct tm* current_time = localtime(&t);

	/*Format the date and time as a string*/
	char datetime[50];
	strftime(datetime, sizeof(datetime), "%Y-%m-%d %H:%M", current_time);

	int passwordCorrect = 0;

	printf("  Enter deposit amount: $");
	scanf("%lf", &depositAmount);

	passwordCorrect = validatePassword(password); /*Asks for the password*/

	if (passwordCorrect)
	{
		if (depositAmount <= 0)
		{
			printf("  Invalid deposit amount.\n");
			return;
		}

		*balance += depositAmount;

		printf("\n\tYou have successfully deposited $%.2f in your account at %s. Your account balance is $%.2f. Thank you for choosing M-Bank.\n\n", depositAmount, datetime, *balance);
	
		printReceipt("DEPOSIT", "N/A", "N/A", "N/A", depositAmount, *balance - depositAmount, *balance);

		sleep(DELAY);
	}
}
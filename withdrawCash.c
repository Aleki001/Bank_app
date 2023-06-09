#include "app.h"

void withdrawCash(double* balance, const char* password)
{
	double withdrawAmount;
	int passwordCorrect = 0;
 
	 /*Getting current time*/
	time_t t = time(NULL);
	struct tm* current_time = localtime(&t);

	/*Format the date and time as a string*/
	char datetime[50];
	strftime(datetime, sizeof(datetime), "%Y-%m-%d %H:%M", current_time);

	printf("  Enter amount to withdraw: $");
	scanf("%lf", &withdrawAmount);

	passwordCorrect = validatePassword(password); /*Asks for the password*/

	if (passwordCorrect)
	{
		if (withdrawAmount <= 0)
		{
			printf("  Invalid withdrawal amount.\n");
			return;
		}

		if (withdrawAmount > *balance)
		{
			printf("\n  You have insufficient funds on your account. You have an outstanding balance of $%.2f. Thank you for choosing M-Bank \n", *balance);
			return;
		}

		*balance -= withdrawAmount;

		printf("\n\tYou have successfully withdrawn $%.2f from your account at %s. Your account balance is $%.2f. Thank you for choosing M-Bank.\n\n", withdrawAmount, datetime, *balance);
	
		printReceipt("WITHDRAW", "N/A", "N/A", "N/A", withdrawAmount, *balance + withdrawAmount, *balance);

		sleep(DELAY);
	}
}
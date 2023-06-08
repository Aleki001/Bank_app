#include "app.h"

void transferMoney(double* balance, double* lastTransferAmount, const char* password)
{
	char accountName[20], accountNumber[20], bank[20];
	double amount;
	int passwordCorrect = 0;
	 /*Getting current time*/
	time_t t = time(NULL);
	struct tm* current_time = localtime(&t);

	/*Format the date and time as a string*/
	char datetime[50];
	strftime(datetime, sizeof(datetime), "%Y-%m-%d %H:%M", current_time);

	printf("Enter recipient's Account name: ");
	scanf("%s", accountName);
	printf("Enter recipient's Account number: ");
	scanf("%s", accountNumber);
	printf("Enter recipient's bank: ");
	scanf("%s", bank);
	printf("Enter transfer amount: $");
	scanf("%lf", &amount);


	passwordCorrect = validatePassword(password); /*Asks for the password*/
	if (passwordCorrect)
	{
		if(amount > *balance)
		{
			printf("Insufficient balance for the transfer. Try again with lower amount\n");
			return;
		}

		/*Perfom transfer operation*/
		*balance -= amount;
		*lastTransferAmount = amount;

		/*confirmation message*/
		printf("\n\tYou have successfully sent $%.2f to %s %s Bank at %s. Your account balance is $%.2f. Thank you for choosing M-Bank.\n\n", amount, accountNumber, bank, datetime, *balance);

		/*print receipt with transaction details*/
		printReceipt("TRANSFER", accountName, accountNumber, bank, amount, *balance + amount, *balance);
		sleep(DELAY);
	}
}
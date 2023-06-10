#include "app.h"

void loansAndSavings(double balance, const char* password)
{
        int option;
	double savingsBalance = 0.0;
	double loanLimit = 200000.0;
	double loanAmount = 0.0;

        while (1)
        {
                system ("clear");

                printf("\t\t\t M-SAVINGS\n\n");
                printf("MENU:\n");
		printf(" 1. Send to M-SAVINGS\n");
		printf(" 2. Withdraw from M-SAVINGS\n");
		printf(" 3. Request Loan\n");
		printf(" 4. Pay Loan\n");
		printf(" 5. Check M-SAVINGS Balance\n");
                printf(" 00. Back\n\n");

                printf("\nSelect an option: ");
		scanf(" %d", &option);
                printf("\n");

                switch (option)
                {
                        case 1:
                                sendToSavings(&balance, &savingsBalance, password);
                        break;
                        case 2:
                                withdrawFromSavings(&balance, &savingsBalance, password);
                        break;
			case 3:
				requestLoan(&balance, &savingsBalance, &loanAmount, loanLimit, password);
			break;
			case 4:
				payLoan(&balance, &loanAmount, password);
			break;
			case 5:
				checkSavingsBalance(savingsBalance, password);
			break;
                        case 00:
                                return;
                        default:
                                printf("\nInvalid option. Please try again.\n\n");
                        break;
                }

        }
}


void sendToSavings(double* balance, double* savingsBalance, const char* password)
{
        double amount;
	int passwordCorrect = 0;

        printf("Enter the amount to save: ");
        scanf("%lf", &amount);

        passwordCorrect = validatePassword(password); /*Asks for the password*/

        if (amount <= *balance)
        {
                if (passwordCorrect)
                {
                        *balance -= amount;
                        *savingsBalance += amount;
                        printf("Amount successfully saved to M-SAVINGS.\n");
                }
        }
        else
        {
                printf("Insufficient balance. Unable to save to M-SAVINGS.\n");
        }
}

void withdrawFromSavings(double* balance, double* savingsBalance, const char* password)
{
        double amount;
	int passwordCorrect = 0;

        printf("Enter the amount to withdraw: ");
        scanf("%lf", &amount);

        passwordCorrect = validatePassword(password); /*Asks for the password*/

        if (amount <= *savingsBalance)
        {
                if (passwordCorrect)
                {
                        *balance += amount;
                        *savingsBalance -= amount;
                        printf("Amount successfully withdrawn from M-SAVINGS.\n");
                }
        }
        else
        {
                printf("Insufficient savings balance. Unable to withdraw from M-SAVINGS.\n");
        }
}

void requestLoan(double* balance, double* savingsBalance, double* loanAmount, double loanLimit, const char* password)
{
        if (*savingsBalance >= 200000)
        {

		int passwordCorrect = 0;

                printf("  Enter the loan amount: ");
                scanf("%lf", loanAmount);

                passwordCorrect = validatePassword(password); /*Asks for the password*/

                if (*loanAmount <= loanLimit)
                {
                        if (passwordCorrect)
                        {
                                *balance += *loanAmount;
                                printf("Loan successfully requested.\n");
                        }
                }
                else
                {
                        printf("Loan amount exceeds the loan limit. Unable to request loan.\n");
                }
        }
        else
        {
                printf("Insufficient savings balance. Unable to request loan.\n");
        }
}

void payLoan(double* balance, double* loanAmount, const char* password)
{
        if (*loanAmount > 0)
        {
		int passwordCorrect = 0;

                printf("Enter the amount to pay: ");
                double payment;
                scanf("%lf", &payment);

                passwordCorrect = validatePassword(password); /*Asks for the password*/
                            

                if (passwordCorrect)
                {
                        double interest = *loanAmount * 0.07;
                        if (payment >= (*loanAmount + interest))
                        {
                                *balance -= (*loanAmount + interest);
                                *loanAmount = 0;
                                printf("Loan successfully paid off.\n");
                        }
                        else
                        {
                                printf("Payment amount is insufficient. Unable to pay loan.\n");
                        }
                }
                
        }
        else
        {
                printf("You do not have an existing loan.\n");
	}
}

void checkSavingsBalance(double savingsBalance, const char* password)
{
	int passwordCorrect = 0;
        passwordCorrect = validatePassword(password); /*Asks for the password*/

        if (passwordCorrect)
                printf("\n\nYour current balance is: $%.2f\n", savingsBalance);

        sleep(DELAY);
}

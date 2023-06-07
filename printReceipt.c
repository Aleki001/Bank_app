#include "app.h"

void printReceipt(const char* transactionType, const char* accountName, const char* accountNumber, const char* bank, double amount, double previousBalance, double currentBalance)
{
        /*Open the receipt file in append mode*/
        FILE* file = fopen("receipt.txt", "a");

        if (file != NULL)
        {
                 /*Getting current time*/
                time_t t = time(NULL);
                struct tm* current_time = localtime(&t);

                /*Format the date and time as a string*/
                char datetime[50];
                strftime(datetime, sizeof(datetime), "%Y-%m-%d %H:%M", current_time);

                /*write transaction details to the receipt file*/
                fprintf(file, "Transaction Details: \n");
                fprintf(file, "Transaction Type: %s\n", transactionType);
                fprintf(file, "Account Name: %s\n", accountName);
                fprintf(file, "Account Number: %s\n", accountNumber);
                fprintf(file, "Bank: %s\n", bank);
                fprintf(file, "Amount: $%.2lf\n", amount);
                fprintf(file, "Previous Balance: $%.2lf\n", previousBalance);
                fprintf(file, "Current Balance: $%.2lf\n", currentBalance);
                fprintf(file, "Date: %s\n", datetime);
                fprintf(file, "-------------------------\n");
                fprintf(file, "-------------------------\n");

                /*close the receipt file*/
                fclose(file);

        }

        
}
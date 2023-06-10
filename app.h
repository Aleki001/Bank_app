#ifndef APP_H
#define APP_H

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

#define DELAY 5

void createAccount();
int validatePassword(const char* password);
void transferMoney(double* balance, double* lastTransferAmount, const char* password);
void depositMoney(double* balance, const char* password);
void withdrawCash(double* balance, const char* password);
void printReceipt(const char* transactionType, const char* accountName, const char* accountNumber, const char* bank, double amount, double previousBalance, double currentBalance);


/*MY ACCOUNT PROTOTYPES*/
void myAccount(double balance, const char* password);
void checkBalance(double balance, const char* password);
void miniStatement(const char* password);


/*LOANS AND SAVINGS PROTOTYPES*/
void loansAndSavings(double balance, const char* password);
void sendToSavings(double* balance, double* savingsBalance, const char* password);
void withdrawFromSavings(double* balance, double* savingsBalance, const char* password);
void requestLoan(double* balance, double* savingsBalance, double* loanAmount, double loanLimit, const char* password);
void payLoan(double* balance, double* loanAmount, const char* password);
void checkSavingsBalance(double savingsBalance, const char* password);


#endif
#ifndef APP_H
#define APP_H

#include <stdio.h>
#include <string.h>
#include <time.h>

void createAccount();
int validatePassword(const char* password);
void transferMoney(double* balance, double* lastTransferAmount);
void depositMoney(double* balance);
void checkBalance(double balance);
void printReceipt(const char* transactionType, const char* accountName, const char* accountNumber, const char* bank, double amount, double previousBalance, double currentBalance);




#endif
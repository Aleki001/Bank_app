#ifndef APP_H
#define APP_H

#include <stdio.h>
#include <string.h>

void createAccount();
int validatePassword(const char* password);
void transferMoney(double* balance, double* lastTransferAmount);




#endif
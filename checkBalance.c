#include "app.h"

void checkBalance(double balance, const char* password)
{
        int passwordCorrect = 0;
        passwordCorrect = validatePassword(password); /*Asks for the password*/

        if (passwordCorrect)
                printf("\n\nYour current balance is: $%.2f\n", balance);

        sleep(DELAY);
}
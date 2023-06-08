#include "app.h"

void miniStatement(const char* password)
{
        FILE *file;
        int character, delay = 15, passwordCorrect = 0;

        passwordCorrect = validatePassword(password); /*Asks for the password*/

        if (passwordCorrect)
        {
                        file = fopen("receipt.txt", "r");

                        if (file == NULL)
                       {
                                printf(" Error opening the file.\n");
                                return;
                        }

        

                        while ((character = fgetc(file)) != EOF)
                        {
                                putchar(character);
                        }

                fclose(file);

                sleep(delay);
        }


}
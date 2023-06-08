#include "app.h"

void miniStatement()
{
        FILE *file;
        int character, delay = 15;

        
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
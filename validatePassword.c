#include "app.h"

int validatePassword(const char* password)
{
	char confirmPassword[20];
	int value;
	int i = 3;

	printf("  Confirm password: ");
	scanf("%s",confirmPassword);

	value = strcmp(password, confirmPassword);

	if (value != 0)
	{
		while (i >= 0)
		{
			printf("\n  Wrong Password!!");
			printf("  Try again, Re-enter Password: ");
			scanf("%s", confirmPassword);

			value = strcmp(password, confirmPassword);

			if (value == 0)
			{
				return (1);
			}
			if (i > 0)
				printf("  Passwords dont match. You have %d more attempts\n", i);
			else
				printf("  Your Account is locked.\n");


			i--;
		}

	}
	else
		return (1);/*if password validation is successful*/

        return (0); /*if password validation fails*/

}
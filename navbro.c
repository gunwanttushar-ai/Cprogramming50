#include <stdio.h>

int main(void)
{
	int choice;

	do {
		printf("\n========== NAVBAR ==========\n");
		printf("1. Home\n");
		printf("2. About Us\n");
		printf("3. Services\n");
		printf("4. Login\n");
		printf("5. Exit\n");
		printf("Choose an option: ");

		if (scanf("%d", &choice) != 1) {
			printf("Invalid input. Please enter a number.\n");
			while (getchar() != '\n') {
			}
			continue;
		}

		switch (choice) {
		case 1:
			printf("You are on the Home page.\n");
			break;
		case 2:
			printf("Welcome to the About Us page.\n");
			break;
		case 3:
			printf("Here are our Services.\n");
			break;
		case 4:
			printf("Login page selected.\n");
			break;
		case 5:
			printf("Goodbye!\n");
			break;
		default:
			printf("Invalid option. Please choose 1 to 5.\n");
		}
	} while (choice != 5);

	return 0;
}

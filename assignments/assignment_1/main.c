#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_LIMIT 100
int main()
{
    char userString[MAX_LIMIT];
    char checkE[] = "exit";

    while (1) {
	printf("Hola Hola > ");
	fgets(userString, MAX_LIMIT, stdin);

	//printf("length of userString: %d\n", strlen(userString));
	//printf("length of checkE: %d\n", strlen(checkE));

	userString[strcspn(userString, "\n")] = 0;
	//printf("length of userString: %d\n", strlen(userString));

	if (strcmp(userString, checkE) == 0) {
	    printf("Good Bye :)\n");
	    exit(0);
	}
	printf("You said: %s\n", userString);

    }
}

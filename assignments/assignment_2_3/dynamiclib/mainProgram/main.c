#include <stdio.h>
#include <myheader.h>
#include <string.h>
#include <stdlib.h>
#define MAX_LIMIT 100
int main()
{
    char userString[MAX_LIMIT];
    int num;
    int fact;

    while (1) {
	//char *userString = malloc(MAX_LIMIT);

	printf("Hola Hola > ");

	fgets(userString, MAX_LIMIT, stdin);

	//scanf("%[^\n]", userString);
	userString[strcspn(userString, "\n")] = 0;

	if (strcmp(userString, "exit") == 0) {
	    printf("Good Bye :)\n");
	    exit(0);
	} else if (strcmp(userString, "rand") == 0) {
	    printf("%d\n", getRandom());
	} else if (strcmp(userString, "fact") == 0) {
	    printf("Enter a number: ");
	    scanf("%d", &num);
	    fact = factorial(num);
	    printf("Result is: %d\n", fact);
	    //When you hit 'enter' to flush your keyboard input to stdin,
	    // it also flushes your newline character from hitting the enter key. 
	    // But scanf isn't reading that newline character. Adding fgetc(stdin) 
	    // before you use fgets(...) to read the newline should fix it
	    // ref:https://gamedev.net/forums/topic/589620-why-is-my-program-skipping-fgets/4741960/
	    fgetc(stdin);
	} else if (strcmp(userString, "fib") == 0) {
	    printf("Enter a number: ");
	    scanf("%d", &num);
	    if (num <= 0)
		printf("Write number bigger than 0!\n");
	    else {
		//      int *arr = fibonacci(num);
		//      printf("The sequence is: ");
		//      for (int i = 0; i < sizeof(arr); i++){
		//              printf("%d", arr[i]);
		//              if (i < num )
		//                      printf(" , ");
		//              else
		//                      printf("\n");

		fibonacci_void(num);
	    }
	    fgetc(stdin);
	    //free(arr);
	} else if (strcmp(userString, "") != 0) {
	    printf("You said: %s\n", userString);
	}

    }
}

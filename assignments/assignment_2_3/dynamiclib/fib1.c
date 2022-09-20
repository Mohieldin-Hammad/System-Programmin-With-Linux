#include <stdlib.h>
#include <stdio.h>
void fibonacci_void(int num)
{

    int seq[num + 1];

    seq[0] = 0;
    seq[1] = 1;

    if (num > 1) {
	int n1 = 0;
	int n2 = 1;
	for (int i = 2; i <= num; i++) {
	    seq[i] = n1 + n2;
	    n1 = n2;
	    n2 = seq[i];
	}
    }
    printf("The sequence is: ");
    for (int i = 0; i <= num; i++) {
	printf("%d", seq[i]);
	if (i < num)
	    printf(" , ");
	else
	    printf("\n");
    }
}

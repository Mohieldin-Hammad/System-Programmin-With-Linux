#include <stdlib.h>
int *fibonacci(int num)
{
    int *arr = malloc(num + 1);
    if (!arr)
	return NULL;

    arr[0] = 0;
    arr[1] = 1;

    if (num > 1) {
	int n1 = 0;
	int n2 = 1;
	for (int i = 2; i <= num; i++) {
	    arr[i] = n1 + n2;
	    n1 = n2;
	    n2 = arr[i];
	}
    }
    return arr;
}

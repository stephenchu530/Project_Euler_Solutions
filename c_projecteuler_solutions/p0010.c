/*
Problem 0010 - Summation of Primes

The sum of the primes below 10 is

  2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	
	int i, j, sum = 0;
	int n = 2000000;
	int *arr;
	
    arr = malloc(sizeof(int)*(n));
    
	for (i = 0; i <= n; i++) {
		*(arr + i) = 1;
	}

	for (i = 2; i < 1 + (int) sqrt(n); i++) {
		if (*(arr + i) == 1) {
			for (j = i * i; j <= n; j += i) {
				*(arr + j) = 0;
			}
		}
	}

	for (i = 2; i <= n; i++) {
		if (*(arr + i) == 1) {
			sum += i;
		}
	}
	
	printf("%d\n", sum);
	free(arr);
	return 0;
}
/*
Output

1179908154
*/
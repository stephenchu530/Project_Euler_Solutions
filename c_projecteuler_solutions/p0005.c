/*
Problem 0005 - Smallest Multiple

2520 is the smallest number that can be divided by each of the numbers from
1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the
numbers from 1 to 20?

Where "evenly divisible" means no remainder.
*/
#include <stdio.h>

int main(void)
{
	int i, j, k, n;
	n = 20;
	k = 1;

	for (i = 1; i <= n; i++) {
		if (k % i > 0) {
			for (j = 1; j <= n; j++) {
				if ((k * j) % i == 0) {
					k *= j;
					break;
				}
			}
		}
	}

	printf("%d\n", k);
	
	return 0;
}

/*
Output

232792560
*/
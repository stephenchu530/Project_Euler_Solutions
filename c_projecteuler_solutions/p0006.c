/*
Problem 0006 - Sum Square Difference

The sum of the squares of the first ten natural numbers is,

  1^2 + 2^2 + ... + 10^2 = 385

The square of the sum of the first ten natural numbers is,

  (1 + 2 + ... + 10)^2 = 55^2 = 3025

Hence the difference between the sum of the squares of the first ten natural
numbers and the square of the sum is

 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred
natural numbers and the square of the sum.
*/
#include <stdio.h>

int main(void)
{
	int i, n, sum1, sum2;
	sum1 = sum2 = 0;
	n = 100;
	for (i = 1; i <= n; i++) {
		sum1 += i * i;
		sum2 += i;
	}
	printf("%d\n", sum2 * sum2 - sum1);
	
	return 0;
}

/*
Output

25164150
*/

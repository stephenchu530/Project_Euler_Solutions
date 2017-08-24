/*
Problem 0007 - 10001st Prime

By listing the first six prime numbers:

  2, 3, 5, 7, 11, and 13

we can see that the 6th prime is 13.

What is the 10,001st prime number?
*/
#include <stdio.h>

int main(void)
{
	int i, count, n = 10001, x = 2;

	while (n > 0) {
		count = 0;
		for (i = 2; i <= x; i++) {
			if (x % i == 0) {
				if (x == i)
					n -= 1;
				else
					break;
			}
		}
		x++;
	}
	printf("%d\n", x - 1);

	return 0;
}
/* Output

104743
*/
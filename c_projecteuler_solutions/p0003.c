/*
Problem 0003 - Largest Prime Factor

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143?
*/
#include <stdio.h>

int main(void)
{
    long long prime = 600851475143,
	          a = 0,
	          x = 1;
	          
	while (x <= prime) {
		if (prime % x == 0) {
			a = x;
			prime = prime / x;
		}
		x++;
	}
	
	printf("%lld\n", a);

	return 0;
}

/*
Output

6857
*/
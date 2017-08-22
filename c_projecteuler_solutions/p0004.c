/*
Problem 0004 - Largest Palindrome Product

A palindromic number reads the same both ways. The largest palindrome made
from the product of two 2-digit numbers is 9009 = 91 × 99. Find the largest
palindrome made from the product of two 3-digit numbers.
*/
#include <stdio.h>

int main(void)
{
	// Code is a literal copy of epimente's solution.
	// All credit to epimente that can be found on Project Euler's
	// solution forum for Problem 0004.

    int i, j, k, l = 0, n, max = 0;
    
    for (i = 100; i <= 999; i++) {
        for (j = 100; j <= 999; j++) {
            k = i * j;
            l = k;
            n = 0;
            while (k) {
                n = (n * 10) + (k % 10);
                k /= 10;
            }
            if (l == n && n > max) {
                max = n;
            }
        }
    }
    printf("%d\n", max);

    return 0;
}

/*
Output

906609
*/
/*
Problem 0009 - Special Pythagorean Triplet

A Pythagorean triplet is a set of three natural numbers,

  a < b < c

for which,

  a^2 + b^2 = c^2

For example,

  3^2 + 4^2 = 0 + 16 = 25 = 5^2

There exists exactly one Pythagorean triplet for which a + b + c = 1000.

Find the product abc.
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    int i, a, b, c_int, n = 1000;
    int square_list[n + 1];
    float c_float;

    for (i = 1; i <= n; i++) {
        square_list[i] = i * i;
    }

    for (a = n; a > 0; a--) {
        b = 1;
        while (b <= n) {
            c_int = (int) sqrt(square_list[a] + square_list[b]);
            c_float = sqrt(square_list[a] + square_list[b]);
            if (c_int != c_float) {
                b++;
            } else if (a + b + c_int == n) {
                break;
            } else {
                b++;
            }
        }
        if (a + b + c_int == n)
            break;
    }
    printf("%d\n", a * b * c_int);
    return 0;
}
/* Output

31875000
*/
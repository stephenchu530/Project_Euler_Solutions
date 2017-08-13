/*
Problem 0003 - Largest Prime Factor

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143?
*/

/*
The following C solution is from "Fuxino" who posted to projecteuler.net
on 15 July 2017.

The solution is not mine. However, I found it to be efficient and elegant
beyond what I know at the moment, so I am using this as a study guide for
myself.
*/
#include <stdio.h>
#include <math.h>

int is_prime(int num);
long long max_prime_factor(long long num);

int main(int argc, char **argv)
{
   long long res, num=600851475143;

   res=max_prime_factor(num);

   printf("%lld\n", res);

   return 0;
}

long long max_prime_factor(long long num)
{
   int i, limit;

   if(is_prime(num))
      return num;

   if(num%2==0)
      return max_prime_factor(num/2);
   else
   {
      limit=floor(sqrt(num));

      for(i=3; i<=limit; i+=2)
      {
         if(num%i==0)
            if(is_prime(i))
               return max_prime_factor(num/i);
      }
   }

   return -1;
}

int is_prime(int num)
{
   int i, limit;

   if(num<=3)
      return num==2 || num==3;

   if(num%2==0 || num%3==0)
      return 0;

   limit=floor(sqrt(num));

   for(i=5; i<=limit; i+=6)
   {
      if(num%i==0 || num%(i+2)==0)
         return 0;
   }

   return 1;
}

/*
Output

6857
*/
#include "main.h"

/**
 * is_prime_int - if the input integer is a prime number, otherwise return 0
 * @n: input integer
 * Return: 1 if prime number or 0 if not
 */

int is_prime_int(int n)
{
       if ((n % 2) != 0)
       {
	      return (0);
       }
      while (((n / n) = 1) && ((n / 1) = n))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * is_prime_number - if the input integer is a prime number, otherwise return 0                  
 * @n: input integer                   
 * Return: 1 if prime number or 0 if not
 */

int is_prime_number(int n)
{
	if (n > 0)
	{
		return (is_prime_int(n - 1));
	}
}

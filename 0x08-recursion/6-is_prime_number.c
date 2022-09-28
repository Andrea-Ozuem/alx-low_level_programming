#include "main.h"
int prime(int n, int i);

/**
  *is_prime_number - checkfor prime num
  *@n: num to be checked
  *Return: 1 as true else 0
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (prime(n, n / 2) > 0)
		return (1);
	return (0);
}

/**
  *prime - checks if a num is prime
  *@n: num
  *@i: n/2
  *Return: check
  */
int prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (prime(n, i - 1));
}

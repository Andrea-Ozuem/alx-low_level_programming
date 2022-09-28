#include "main.h"

/**
  *factorial - factorial of a num
  *@n: num
  *Return: factorial
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

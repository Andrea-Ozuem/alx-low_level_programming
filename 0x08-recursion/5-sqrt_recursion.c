#include "main.h"
int sqrroot(int n, int i);

/**
  *_sqrt_recursion - finds sqrt of a num
  *@n: num
  *Return: sqrroot
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrroot(n, (n + 1) / 2));
}

/**
  *sqrroot - checks if perfect square
  *@n: input
  *@i: checker
  *Return: if perfect sqr
  */
int sqrroot(int n, int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (sqrroot(n, i - 1));
}

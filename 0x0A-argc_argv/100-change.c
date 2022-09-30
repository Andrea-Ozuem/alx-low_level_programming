#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *main - calculates numer of coins to be given
  *@argc: cents
  *@argv: cents
  *Return: nu of coins to be given
  */
int main(int argc, char *argv[])
{
	int cents, quarters, dimes, nickels, two, pennies, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
		printf("%d\n", 0);

	quarters = calculate_quarters(cents);
	cents = cents - quarters * 25;

	dimes = calculate_dimes(cents);
	cents = cents - dimes * 10;

	nickels = calculate_nickels(cents);
	cents = cents - nickels * 5;

	two = floor(cents / 2);
	cents = cents - two * 2;

	pennies = floor(cents / 1);
	cents = cents - pennies * 1;

	coins = quarters + dimes + nickels + two + pennies;
	printf("%i\n", coins);

	return (0);
}

/**
  *calculate_quarters - calc quaters
  *@cents: input
  *Return: quatrers
  */
int calculate_quarters(int cents)
{
	int quarters;

	quarters = floor(cents / 25);
	return (quarters);
}

/**
  *calculate_dimes - calcs dimes
  *@cents: input
  *Return: dimes
  */
int calculate_dimes(int cents)
{
	int dimes;

	dimes = floor(cents / 10);
	return (dimes);
}

/**
  *calculate_nickels - calcs nickels
  *@cents: input
  *Return: nickels
  */
int calculate_nickels(int cents)
{
	int nickels;

	nickels = floor(cents / 5);
	return (nickels);
}

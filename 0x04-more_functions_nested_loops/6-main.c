#include "main.h"
#include <stdio.h>
/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	char *s = "end";
	 printf("%s\n", s);
    	 print_diagonal(0);
	 printf("%s\n", s);
	 print_diagonal(2);
	 printf("%s\n", s);
	 print_diagonal(10);
	 printf("%s\n", s);
	 print_diagonal(-4);
	 print_diagonal(4);
	 return (0);
}

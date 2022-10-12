#include "function_pointers.h"

/**
  *print_name - calls function f for name
  *@name: name to be printed
  *@f: funtion  to be called
  */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}

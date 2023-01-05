#include "hash_tables.h"

/**
  *key_index - gives you the index of a key generated from djb2
  *@key: key from djb algorithm
  *@size: size of the array of the hash table
  *Return: the index at which the key/value pair should be stored in the array
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_gen;

	key_gen = hash_djb2(key);
	return (key_gen % size);
}

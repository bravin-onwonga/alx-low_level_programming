#include <stdio.h>

unsigned long hash_function(char *str);

#define CAPACITY 50000 // Size of the HashTable.

int main(void)
{
	char *str1 = "Hel";
	char *str2 = "Cau";
	unsigned long int str_1;
	unsigned long int str_2;

	str_1 = hash_function(str1);
	str_2 = hash_function(str2);

	printf("%lu\n", str_1);
	printf("%lu\n", str_2);

	return (0);
}

unsigned long hash_function(char *str)
{
	unsigned long i = 0;

	for (int j = 0; str[j]; j++)
	{
		i += str[j];
		printf("%lu--\n", i);
	}

	return i % CAPACITY;
}

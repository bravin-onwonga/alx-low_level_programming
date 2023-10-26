#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = wildcmp("main.c", "*.c");
	printf("%d\n", r); /*1*/
	r = wildcmp("main.c", "m*a*i*n*.*c*");
	printf("%d\n", r); /*2*/
	r = wildcmp("main.c", "main.c");
	printf("%d\n", r); /*3*/
	r = wildcmp("main.c", "m*c");
	printf("%d\n", r); /*4*/
	r = wildcmp("main.c", "ma********************************c");
	printf("%d\n", r); /*5*/
	r = wildcmp("main.c", "*");
	printf("%d\n", r); /*6*/
	r = wildcmp("main.c", "***");
	printf("%d\n", r); /*7*/
	r = wildcmp("main.c", "m.*c");
	printf("%d\n", r); /*8*/
	r = wildcmp("main.c", "**.*c");
	printf("%d\n", r); /*9*/
	r = wildcmp("main-main.c", "ma*in.c");
	printf("%d\n", r);
	r = wildcmp("main", "main*d");
	printf("%d\n", r);
	r = wildcmp("holberton.c", "h.*c");
	printf("%d\n", r);
	return (0);
}

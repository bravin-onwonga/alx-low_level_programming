#include "main.h"

int main(int argc, char *argv[])
{
	int sum, num, i;
	
	if (argc == 1)
	{
		printf("%d\n", argc - 1);
		return (0);
	}

	for (i = 0; i < argc; i++)
	{
		if (*argv[i] >= 'a' && *argv[i] <= 'z')
		{
			printf("Error\n");
			return (1);
		}
		num = atoi(argv[i]);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}

#ifndef MAIN_H
#define MAIN_H

#define ABS(x) (_abs(x))

int _abs(int n)
{
	if (n < 0)
		n = -n;

	return (n);
}

#endif /* MAIN_H */

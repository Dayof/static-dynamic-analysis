#include "testlib.h"
#include <stdio.h>

int fib(int num)
{
	int f[num+2];

	f[0] = 0; f[1] = 1;

	for (int i = 2; i <= num; ++i) f[i] = f[i-1] + f[i-2];
	return f[num];
}

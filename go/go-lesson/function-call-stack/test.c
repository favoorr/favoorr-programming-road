#include <stdio.h>
#include <stdlib.h>

__attribute__((noinline)) void info(int x)
{
	printf("info %d\n", x);
}

__attribute__((noinline)) int add(int x, int y)
{
	int z = x + y;
	info(z);
	
	return z;
}

int main(int argc, char **argv)
{
	int x = 0x100;
	int y = 0x200;
	int z = add(x, y);

	printf("%d\n", z);

	return 0;
}
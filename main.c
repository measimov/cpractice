#include <stdio.h>
#define test 100

int main()
{
	int a = -1;
	unsigned int b = 1000;
	int c = a < (long)b ? 1 : 0;
	printf("hello git%d\n", c);
	return 0;
}

/**
 *
 *	while的用法
 * 
 */
#include <stdio.h>

int main(void)
{
	int sum1 = 0;
	int sum2 = 0;
	int j = 0;
	for (int i = 1; i <= 100; ++i)
	{
		sum1 += i;
	}

	while (j <= 100)
	{
		sum2 += j;
		++j; // 无此句会造成死循环
	}
	printf("sum1 = %d, sum2 = %d\n", sum1, sum2);
	return 0;
}



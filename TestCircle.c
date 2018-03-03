#include <stdio.h>
/** 
 * 循环与if的嵌套使用
 * 求1~100之间能被3整除数的和及个数
 * 
 */
int main(void)
{
	int sum = 0;
	int count = 0; // 能被3整除数的个数
	for (int i = 3; i <= 100; ++i)
	{
		if (i % 3 == 0)
		{
			sum  += i;
			count ++;
		}

	}
	printf("sum = %d, count = %d\n", sum, count);
	return 0;
}
#include <stdio.h>
/** 
 *
 *	回文数判断，121，12321，
 *
 * 
 */
int main(void)
{
	int val = 121; // 存放要判断的数
	int sum = 0;
	int m;

	m = val;
	while (m)
	{
		sum = sum * 10 + m % 10;
		m /= 10;
	}

	if (sum == val)
	{
		printf("Yes!\n");
	}
	else
	{
		printf("No!\n");
	}

	return 0;
}
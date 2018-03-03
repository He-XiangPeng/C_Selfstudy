#include <stdio.h>
/** 
 *	求1+3+5+7+...+100的值
 * 
 */
int main(void)
{
	int sum = 0;
	for (int i = 1; i < 100; i+=2)
	{
		sum = sum + 1;
		printf("* ");
	}
	printf("%d\n", sum);
	return 0;
}
#include <stdio.h>
/** 
 *	求1+1/2+1/3+...+1/100的和
 * 	需用强制转换符
 * 
 */
int main(void)
{
	float sum = 0;
	for (int i = 1; i < 100; ++i)
	{
		sum += 1/ (float) (i); // sum += 1.0/i;	
	}
	printf("sum = %f\n", sum);
	return 0;
}
#include <stdio.h>
/** 
 *	斐波那契数列的下一个数
 *	0,1,1,2,3,5,8,13,21,34
 * 	F0=0，F1=1，Fn=F(n-1)+F(n-2)（n>=2，n∈N*）
 * 	
 */
int main(void)
{
	int n; // n表示第n项，n>=2
	int f0, f1, fn;
	f0 = 0;
	f1 = 1;
	n = 8;
	if (0 == n)
	{
		fn = 0;
	}
	else if (1 == n)
	{
		f1 = 1;
	}
	else
	{
		for (int i = 2; i <= n; ++i)
		{
			fn = f0 + f1;
			f0 = f1;
			f1 = fn;
		}
	}
	printf("fn = %d\n", fn);


	return 0;
}
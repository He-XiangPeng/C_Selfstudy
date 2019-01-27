/** 
 *	斐波那契数列的下一个数
 *	1,1,2,3,5,8,13,21,34
 * 	F1=1，F2=1，Fn=F(n-1)+F(n-2)（n>=3，n∈N*）
 * 	
 */

#include <stdio.h>
int main(void)
{
	int n; // n表示第n项，n>=2
	int f1, f2, fn;
	f1 = 1;
	f2 = 1;
	printf("%s", "请输入:n = ");
	scanf("%d", &n);
	// n = 8;
	if (1 == n)
	{
		fn = 1;
	}
	else if (2 == n)
	{
		f2 = 1;
	}
	else
	{
		for (int i = 3; i <= n; ++i)
		{
			fn = f2 + f1;
			f1 = f2;
			f2 = fn;
		}
	}
	printf("fn = %d\n", fn);


	return 0;
}
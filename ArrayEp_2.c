/**
 *	2015年01月14日20:46:51
 *	要明白pArr[3] 和 a[3]是同一个变量
 *
 * 
 */
#include <stdio.h>

void f(int * pArr, int len);
int main(void)
{
	int a[6] = {1, 2, 3, 4, 5, 6};

	printf("%d\n", a[3]); // 4
	f(a, 6); // a及pArr均指向了数组的开始处
	printf("%d\n", a[3]); //88  下标a[3]等价于*(a+3)
	return 0;
}

void f(int * pArr, int len)
{
	pArr[3] = 88;
}
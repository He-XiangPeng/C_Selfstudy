#include <stdio.h>

/** 
 *	指针使函数返回多个值
 *
 * 
 */

void Mult(int * p, int * q);
int main(void)
{
	int a = 3, b = 5;
	Mult(&a, &b);
	printf("a= %d, b = %d\n", a, b);
	return 0;
}

void Mult(int * p, int * q)
{
	*p = 1;
	*q = 2; //返回了两个值
}

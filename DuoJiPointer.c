#include <stdio.h>

/** 
 *	多级指针
 *
 * 
 */
int main(void)
{
	int i = 10;	// int 类型
	int * p = &i; // int * 类型 *p = i
	int ** q = &p; // int ** 类型 *q = p
	int *** r = &q; // int *** 类型 *r = q
	// r = &p; error
	printf("%d\n", ***r);
	return 0;
}
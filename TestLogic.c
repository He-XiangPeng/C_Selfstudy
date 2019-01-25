/** 
 *	三目运算符
 * 	逻辑关系
 *  逗号运算符
 */
#include <stdio.h>

int main(void)
{
	int i = 10;
	int k = 20;
	int m, n;
	i = (i++, ++k, k+2, k-2); // k+2，k的值没有改变; i == k-2
	//m = (3 > 2) && (k = 8); // m = 1, k = 8
	//m = (1 > 2) && (k = 5); // m = 0, k = 20
	m = (1 > 2) || (k = 5); // m = 1, k = 5
	n = (3 > 2 ? 5 : 1); // 三目运算符
	printf("m = %d, k = %d, n = %d,i = %d\n", m, k, n, i);
	return 0;
}
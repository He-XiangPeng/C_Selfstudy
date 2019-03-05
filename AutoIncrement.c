/**
 * i++与++i的区别
 * 后自增与前自增的区别
 * 
 */
#include <stdio.h>
int main(void)
{
	int i, j, m, n;
	i = j = 3;
	m = i++;
	n = ++j;
	printf("i=%d j=%d m=%d n=%d \n", i, j, m, n);
	return 0;
}

/**
 *	输出
 *	i=4 j=4 m=3 n=4 
 *
 * 
 */
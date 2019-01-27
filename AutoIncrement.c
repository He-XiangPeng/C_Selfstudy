/**
 * i++与++i的区别
 *
 * 
 */
#include <stdio.h>
int main(void)
{
	int i, j, m, n;
	i = j = 3;
	m = i++;
	n = ++j;
	printf("%d %d %d %d \n", i, j, m, n);
	return 0;
}
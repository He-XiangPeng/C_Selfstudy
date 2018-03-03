#include <stdio.h>

int main(void)
{
	int i = 5;
	int j = 7;
	int k;

	// k = i & j;
	// printf("%d\n", k); // 5 ; 0101-0111相与0101；二进制每一位相与

	// k = i | j;
	// printf("%d\n", k);// 7

	// k = ~i;
	// printf("%d\n", k); // -6; 111111111...1010

	// k = i && j;
	// printf("%d\n", k);// 1
	k = i << 1;

	return 0;
}
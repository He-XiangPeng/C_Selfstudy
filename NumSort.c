#include <stdio.h>
	/*
	int i = 3;
	int j = 5;
	int t;
				// 交换两个数的值
	t = i; // t == 3
	i = j; // i == 5
	j = t; // j == 3
	降序排列从大到小(<改为>升序排列)
	*/
int main(void)
{
	int a = 2;
	int b = 4;
	int c = 3;
	int t;
	if (a < b)
	{
		t = a;
		a = b; 
		b = t;
	}
	if (a < c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (b < c)
	{
		t = b;
		b = c;
		c = t;
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}
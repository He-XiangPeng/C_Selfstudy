#include <stdio.h>
/** 
 *	一维数组的简单使用
 *  2015年01月12日12:59:36
 */
int main(void)
{
	int a[5] = {1, 2, 3, 4, 5};// a[5]从a[0]开始
	int b[5] = {1,2,3}; // a[3],a[4]为零
	int c[5];  // 定义数组
	int d[5] = {0};// 清零操作
	printf("%#X，%#X\n", c, &c[0]); //输出c[0]的地址
	// 0X5D0E3C50，0X5D0E3C50

	for (int j = 0; j < 5; ++j)
	{
		c[j] = a[j]; // 数组复制
	}
	
	for (int i = 0; i < 5; ++i)
	{
		printf("%d\n", a[i]);
	}


	/**
	 * 数组内部元素首尾交换
	 */
	int z[8] = {3, 4, 5, 6, 7, 8, 9, 10,};
	int x, y ,v;
	x = 0;
	y = 7;

	while (x < y)
	{
		v = z[x];
		z[x] = z[y];
		z[y] = v;

		++x;
		--y;
	}

	for (int n = 0; n < 8; ++n)
	{
		printf("%d\n", z[n]);
	}




	//printf("%d\n", a[100]); // 编译不会出错，
							// 但会有array index 100 is past the end of the array的warning
	return 0;
}
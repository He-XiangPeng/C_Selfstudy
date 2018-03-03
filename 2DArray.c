#include <stdio.h>
/**
 *	二位数组的操作和使用
 * 
 */
int main(void)
{
	int a[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			printf("%-4d  ", a[i][j]); // 输出二维数组
		}
		printf("\n");
	}

	int arr[6] = {31, 28, 31, 30, [5] = 45}; // c99新用法
	for (int i = 0; i < 6; ++i)
	{
		printf("%-4d  ", arr[i]);
	}
	printf("\n");

	// int zippo[4][2] = {(2, 4), (6, 8), (1, 3), (5, 7)}; 相当于{4,8,3,7,0,0,0,0,};逗号运算符
	int zippo[4][2] = {{2, 4}, {6, 8}, {1, 3}, {5, 7}}; // 四行两列的数组
	int (*pz) [2]; // 二维数组指针
	pz = zippo;
	/** 
	 *	zippo[m][n] == * (* (zippo + m) + n)
	 * 	pz[m][n] == * (* (pz + m) + n)
	 * 
	 */
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			printf("%-3d ", * (* (pz + i) + j));
		}
		printf("\n");
	}
	
	return 0;
}
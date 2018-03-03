#include <stdio.h>
#include <stdlib.h>
/** 
 *	动态一维数组的构造
 *
 *
 * 
 */
int main(void)
{
	int a[5];
	int len = 5; // 动态构造了5个元素的数组
	int * pArr;

	pArr = (int *)malloc(4 * len); // 类似于int pArr[len]
	for (int i = 0; i < len; ++i)
	{
		pArr[i] = i + 4; 
	}

	for (int j = 0; j < len; ++j)
	{
		printf("pArr[%d] = %d\n", j, pArr[j]); // 输出一维数组
	}

	free(pArr); // 释放pArr的内存
	// realloc(pArr, 100); // 扩充数组
	return 0;
}
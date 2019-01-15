/** 
 *	冒泡排序
 *
 *
 */
#include <stdio.h>

void bubbleSort(int * p, int len);

int main(void)
{
	int a[6] = {10, 2, 8, -8, 0, 3};
	bubbleSort(a, 6);

	for (int i = 0; i < 6; ++i)
	{
		printf("a[%d] = %3d\n", i, a[i]);
	}
	return 0;
}

void bubbleSort(int * p, int len) // 数组是int * 类型
{
	int t;
	for (int i = 0; i < len - 1; ++i)
	{
		for (int j = 0; j < len - 1 - i; ++j) // 内部循环执行完毕后再执行外部循环
		{
			if (p[j] > p[j+1])
			{
				t = p[j];
				p[j] = p[j+1];
				p[j+1] = t;
			}
		}
	}
}
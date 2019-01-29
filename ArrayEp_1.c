/** 
 *	确定一个维数组需要几个参数
 *
 */
#include <stdio.h>

/**
 * 遍历数组元素
 * @param pArr 一维数组名
 * @param len  一维数组长度
 */
void f(int * pArr, int len); // int *pArr知道数组的开始，int len表示数组的长度

int main(void)
{
	int a[5] = {1, 2, 3, 4, 5}; // 5表示数组元素的个数，a[0]-a[4]
	int b[6] = {-1, -2, -3, 4, 5, -6}; // 定义的同时并初始化才是正确的
	int c[100] = {1, 99, 22, 33};

	f(a, 5); // a是 int *
	f(b, 6);
	f(c, 100);

 	return 0;
}

void f(int * pArr, int len)
{
	
	for (int i = 0; i < len; ++i)
	{
		printf("%d ", *(pArr+i));
		//*pArr *(pArr+1) *(pArr+2)
		//*(pArr+1)等价于pArr[i]也等价于b[i]也等价于*(b+i)
	}
	printf("\n");

}

/**
 *	1 2 3 4 5 
-1 -2 -3 4 5 -6 
1 99 22 33 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
 *
 *
 *
 * 
 */
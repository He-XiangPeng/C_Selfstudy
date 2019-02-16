/** 
 *	动态分配内存的用法
 * 	动态内存可以跨函数使用实例
 * 
 */
#include <stdio.h>
#include <stdlib.h>

void func(int ** q)
{
	*q = (int *)malloc(sizeof(int)); // 等价于p = (int *)malloc(sizeof(int));
	// 动态内存在堆中分配的，没有释放
	**q = 5;
	// free(q); // 不能在此处释放内存

}

int main(void)
{
	int * p;
	func(&p);
	printf("%d\n", *p);

	free(p);
	p = NULL; // 指针置零，避免野指针
	if (NULL != p)
	{
		printf("内存未释放\n");
	}
	else
	{
		printf("内存已释放\n");
	}


	return 0;
}
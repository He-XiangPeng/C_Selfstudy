/** 
 *	跨函数使用内存
 *
 */
#include <stdio.h>

void func_1(int ** q); // q是个指针变量，无论q是什么类型的指针变量都只占8个字节
int main(void)
{
	int * p;

	func_1(&p);
	printf("%d\n", *p); // 该句语法没有问题，但逻辑上有问题
	return 0;
}

void func_1(int ** q)
{
	int i = 5;
	*q = &i; // *p = i;*q  = p
}
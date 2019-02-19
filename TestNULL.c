/**
 *	NULL指针的用法
 *	只能用于赋值和比较运算
 * 	程序可以编译通过，但无法运行
 * 
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
	char * p;
	p = NULL;
	printf("内存位置0的值%d\n", p);
	return 0;
}
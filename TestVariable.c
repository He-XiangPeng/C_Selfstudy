/** 
 *	全局变量与局部变量
 *
 * 
 */
#include <stdio.h>

int k = 1000; // 全局变量k

void g()
{
	printf("k = %d\n", k);

}

void f(int i)
{
	// int i = 1; 不能这样初始化
	int j = 10; // 局部变量i，j
	return;
}



int main(void)
{
	f(3);
	g();
	return 0;
}
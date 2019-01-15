/** 
 *	c传统数组的缺陷	
 *
 * 
 */
#include <stdio.h>

void g(int * pArr, int len);
void f(void);

int main(int argc, char const *argv[])
{
	f();

	return 0;
}

void f(void)
{

	int a[5] = {1, 2, 3, 4, 5};
	//20个字节的存储空间程序员无法手动编程释放它，
	//它只能在本函数运行完毕时由系统自动释放
	g(a, 5);
	printf("%d\n", a[2]);
}

void g(int * pArr, int len)
{
	pArr[2] = 88; // pArr[2] = a[2]
}

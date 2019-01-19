/** 
 *
 *	malloc的用法
 *
 * 
 */
#include <stdio.h>
#include <stdlib.h>

void f(int * q);

int main(int argc, char const *argv[])
{
	int * p = (int *)malloc(sizeof(int));
	*p = 10;

	printf("%d\n", *p); // 10
	f(p);
	printf("%d\n", *p); //200

	return 0;
}

void f(int * q)
{
	// *p = 200;// error
	// q = 200;
	// **q = 200;
	*q = 200; //q是p的一份拷贝
	// free(q); //把q所指向的内存释放掉，这样是不行的?
}
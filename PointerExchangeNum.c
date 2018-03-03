#include <stdio.h>

/** 
 *	两个数互换值，用指针实现
 * 
 */

void exchange_1(int a, int b);
void exchange_2(int * p, int * q);
void exchange_3(int * p, int * q);

int main(void)
{
	int a = 3;
	int b = 5;
	
	exchange_1(a, b);
	printf("1: a = %d, b = %d\n", a, b); // a = 3; b =5

	exchange_2(&a, &b);
	//exchange_2(a , b);
	//exchange_2(*p, *q);
	printf("2: a = %d, b = %d\n", a, b);// a = 3; b = 5

	exchange_3(&a, &b);
	printf("3: a = %d, b = %d\n", a, b); // a = 3; b =5

	return 0;
}

void exchange_1(int a, int b)
{
	int t; // a, b是形参类型

	t = a;
	a = b;
	b = t;
}

void exchange_2(int * p, int * q) //形参名字是p,q；接受实参数据的是p和q
{
	int * t; // t必须是int * 类型

	t = p;   // 互换p,q的指向
	p = q;	// a, b的值并没有改变
	q = t;
}

void exchange_3(int * p, int * q)
{
	int t; // t必须是int类型

	t = *p;   // p是int *， *p是int
	*p = *q;  //改变p,q指向地址的内容的值
	*q = t;
}







/** 
 *	两个数互换值，用指针实现
 *	经典指针程序
 * 
 */
#include <stdio.h>

/**
 * 不能互换两个数的值
 * @param a 形参
 * @param b 形参
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
	//错误的调用方法
	//exchange_2(a , b);
	//exchange_2(*p, *q);
	printf("2: a = %d, b = %d\n", a, b);// a = 3; b = 5

	exchange_3(&a, &b);
	printf("3: a = %d, b = %d\n", a, b); 
	// 3: a = 5, b = 3

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







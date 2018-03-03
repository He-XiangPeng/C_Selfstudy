#include <stdio.h>

/** 
 *	指针的简单实用
 *
 * 
 */
int main(void)
{
	int * p; // p是变量的名字，int * 是指针数据类型
				// int * 表示p变量存放的是int类型变量的地址
	int j;
	int i = 3;
	p = &i; /*ok,p保存了i的地址，因此p指向i
				3.如果一个指针变量指向了某个普通变量，
					则*指针变量就完全等同于普通变量
					例子：
						如果p是个指针变量，并且p存放了普通变量i的地址
						则p指向了普通变量i
						*p 就完全等同于 i
						或者说：在所有出现*p的地方都可以替换成i
								在所有出现i的地方都可以替换成*p
						*p 就是以p的内容为地址的变量
				*/
	// p = i; // error,p是指针
	// p = 55;
	j = *p; // 等价于 j = i
	printf("i = %d, j = %d\n", i, j);

	int a[5];
	int * q = &a[1];
	int * s = &a[4];
	printf("q和s所指向的单元相隔%ld个单元\n", s - q); 
	// 两指针相减ld


	
	return 0;
}

/**
 *	output
 * 	i = 3, j = 3
 *  q和s所指向的单元相隔3个单元
 *
 * 
 */
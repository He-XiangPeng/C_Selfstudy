/**
 *	2015-01-15 20:23:15
 *	malloc 是 memory allocate(内存分配)的缩写
 *
 *
 * 
 */
#include <stdio.h>
#include <stdlib.h>
 // malloc.h--动态存储分配函数头文件,当对内存区进行操作时,调用相关函数.
 // ANSI标准建议使用stdlib.h头文件,但许多C编译要求用malloc.h
 // clang使用stdlib.h

 int main(void)
 {
 	int i = 5; // 分配了4个字节，静态分配
 	int * p = (int *)malloc(4); // 强制类型转换
 	/**
 	 *	1.要使用malloc函数，必须添加malloc.h这个头文件
 	 *	2.malloc函数只有一个形参，并且是整型
 	 *	3.malloc(4)表示请求系统为本程序分配4个字节
 	 *	4.malloc函数只能返回第一个字节的地址
 	 *	5.14行分配了8个字节，p变量占8个字节，p所指向的内存占4个字节
 	 *	6.p本身所占的内存是静态分配的，p所指向的内存是动态分配的
 	 * 
 	 */
 	*p = 5;// 内存是动态分配的
 	free(p);//把p所指向的内存给释放掉,p本身的内存是静态的，不能由程序员手动释放
 	// p本身的内存只能在p变量所在的函数运行终止时由系统自动释放
 	printf("%lu\n", sizeof(*p)); // 4个字节
 	printf("%lu\n", sizeof(p)); // 8个字节
 	printf("你好！\n");
 	return 0;
 }
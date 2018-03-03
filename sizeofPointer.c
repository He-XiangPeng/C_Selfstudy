#include <stdio.h>

/** 
 *	指针数据类型的大小
 *
 * 
 */
int main(int argc, char const *argv[])
{
	char ch = 'A';
	int i = 99;
	double x = 66.6;

	char * p = &ch;
	int * q = &i;
	double * r = &x;

	printf("%lu, %lu, %lu \n", sizeof(p), sizeof(q), sizeof(r));
	//指针数据类型都是8个字节(mac 64bit)，lu即unsigned long
	//32 bit 是4个字节
	return 0;
}
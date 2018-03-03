#include <stdio.h>
#include <inttypes.h> // 支持可移植类型
/** 
 *	可移植的整数类型名
 * 	C prime plus 例子
 * 	测试sizeof
 */
int main(void)
{
	int16_t me16 = 4593;
	printf("\"short\" = %hd\n", me16);
	printf("sizeof(bool):%lu byte\n", sizeof(bool));
	printf("sizeof(int):%lu byte\n", sizeof(int));
	printf("sizeof(char):%lu byte\n", sizeof(char));
	printf("sizeoflong):%lu byte\n", sizeof(long));
	printf("sizeof(double):%lu byte\n", sizeof(double));
	// printf("me16 = %"PRldN"\n", me16); // 该句无法编译通过

	return 0;
}
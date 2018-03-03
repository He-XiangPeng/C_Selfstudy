#include <stdio.h>
/** 
 *	嵌套的for循环
 * 	
 *
 * 
 */
int main(void)
{
	for (int i = 0; i < 3; ++i)
		for(int j = 2; j < 5; ++j)
			printf("HAHA ");
		printf("XIXI\n");
	
	return 0;
}
/** 
 *	output
 * 	HAHA HAHA HAHA HAHA HAHA HAHA HAHA HAHA HAHA XIXI
 */
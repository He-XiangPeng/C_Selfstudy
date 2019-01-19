/** 
 *	switch的用法
 * 
 */
#include <stdio.h>

int main(void)
{
	int val = 6;
	switch (val)
	{

		case 1:
			printf("1层开\n");
			break; // case是程序的入口，break终止switch
		case 2:
			printf("2层开\n");
			break;
		case 3:
			printf("3层开\n");
			break;
		default:
			printf("没有盖到这一层\n");
			break;

	}

	return 0;
}
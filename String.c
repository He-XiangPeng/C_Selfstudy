/** 
 *	2015-01-22 13:19:43
 *	字符串操作
 *
 *
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char buf1[] = "aaa";
	char buf2[] = "aaabbb";
	char buf3[] = "ccc";
	int ptr;
	int ptr1;
	ptr = strcmp(buf2, buf1);
	ptr1 = strncmp(buf2, buf1, 3);
	printf("%d, %d\n", ptr, ptr1);

	char * tmp;
	char * tmp1;
	tmp = strcat(buf3, buf1);
	tmp1 = strncat(buf2, buf1, 2);
	printf("%s, %s\n", tmp, tmp1);

	char tmp2[15];
	char tmp3[16];
	strcpy(tmp2, buf1);
	strncpy(tmp3,buf3,5);
	printf("%s, %s\n", tmp2, tmp3);

	int a;
	a = strlen(tmp3);
	printf("%d\n", a);

	int b;
	b  = atoi("123");
	printf("%d\n", b);


 	return 0;
}
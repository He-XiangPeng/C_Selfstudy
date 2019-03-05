/**
 *	文件写入的操作
 *
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 // size_t fwrite(const void *restrict ptr, size_t size, size_t nitems, FILE *restrict stream);
int main(void)
{
	// FILE * fp = fopen("w.txt", "w");
	FILE * fp = fopen("write.txt", "a");

	if (!fp)
	{
		perror("fopen");
		// void perror(const char *s);
		exit(-1);

	}

	fwrite("Hello world\n", 1, strlen("Hello world\n"), fp);
	fwrite("Hello world\n", 1, strlen("Hello world\n"), fp);

	fclose(fp);
 	return 0;
}
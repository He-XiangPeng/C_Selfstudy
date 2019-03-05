#include <stdio.h>
#include <stdlib.h>


 // size_t fwrite(const void *restrict ptr, size_t size, size_t nitems, FILE *restrict stream);
int main(void)
{
	char buf[20];
	// FILE * fp = fopen("write.txt", "w"); r+, w+,加上读和写的权限
	FILE * fp = fopen("write.txt", "r");
	if (!fp)
	{
		perror("fopen");
		// void perror(const char *s);
		exit(-1);

	}

	FILE * fp2 = fopen("read&write.txt", "w");
	if (!fp2)
	{
		perror("fopen_2");
		// void perror(const char *s);
		exit(-1);

	}

	while (1) 
	{
	    size_t ret = fread(buf, 1, 20, fp);
	    if (ret <= 0)
	    {
	    	break;
	    }
	    fwrite(buf, 1, ret, fp2);
	}

	fclose(fp);
	fclose(fp2);
 	return 0;
}
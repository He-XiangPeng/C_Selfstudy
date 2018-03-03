#include <stdio.h>

int main(void) 
{
	int i, j;
	printf("Please input i&j's value！\n");
	scanf("m%d,%d", &i, &j); // &i表示i的地址 &是一个取地址符 m123
	printf("i = %d, j = %d\n", i, j);
    
	int m, n;
	char ch;
	scanf("%d", &m);
	printf("m = %d\n", m);

	while ((ch = getchar()) != '\n') 
	{
		continue;  // 对用户非法输入的处理,continue检查用户是否输入了return
	}

    scanf("%d", &n);
    printf("n = %d\n", n);


    return 0;
}
/*
	output
	m123 34
	i = 123, j = 34
*/
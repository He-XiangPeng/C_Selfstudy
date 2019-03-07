/*
*   测试EOF文件尾
*   MacOS结束符是Ctrl+z
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int ch;
    while ((ch = getchar()) != EOF)
        putchar(ch);
    return 0;
}






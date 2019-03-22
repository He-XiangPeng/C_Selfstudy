/**
 *  setjmp和longjmp
 *  在C++中变为“catch”和“throw”
 * 
 * 
 */
#include <stdio.h>
#include <setjmp.h>

jmp_buf buf;

void banana(void)
{
    printf("in banana() \n");
    longjmp(buf, 1);
    // 以下代码不会执行
    printf("you'll never see this, because i longjmp'd");
}

int main(int argc, char const *argv[])
{
    if(setjmp(buf))
        printf("back in main\n");
    else
    {
        printf("first time through\n");
        banana();
    }
    return 0;
}

#include <stdio.h>
int main(void)
{
    printf("hello\n");
    int i = ((~0xf)^(~0xe));
    printf("%d\n", i);

}
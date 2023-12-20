#include <stdio.h>

void func(){
    printf("func test\n");
}

int add(int a, int b)
{
    int result = 0;
    result = a + b;
    printf("add : %d + %d = %d\n",a,b,result);
    return result;
}
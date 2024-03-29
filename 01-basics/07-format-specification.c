#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("We have %d coins in the bank\n", 100);
    printf("We have %f coins in the bank\n", 125.7);
    printf("num1=%d, num2=%d, sum=%d\n", 1,2,1+2);
    printf("num3=%f, num4=%f, sum=%f\n", 1.2,2.1,1.2+2.1);
    printf("num5=%.1f, num6=%.1f, sum=%.1f\n", 2.111,1.222,2.111+1.222);
    printf("num7=%d, num8=%d, sum=num7+num8=%d\n", 1, 2, 1+2);
    printf("num9=%d,num10=%d,sum=num9+num10=%d+%d=%d\n", 1,2,1,2,1+2);
    return 0;
}
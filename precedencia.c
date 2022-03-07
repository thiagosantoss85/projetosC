#include <stdio.h>
int main()
{
    int a, b, c;
    a=3;
    b=2;
    c=2;

    c++;

    c = c+!a >= b && c != b;    
    printf(" Sendo a = 3, b = 2 e c = 2,\n o resultado de c += !a >= b && c != b  : %.2i\n",c);

    
    return 0;



}

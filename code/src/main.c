#include <stdio.h>
#include <func.h>

int main(int argc, char const *argv[])
{
    int a = 1, b = 2;
    int c = add(a, b);
    printf("%d + %d  = %d\n", a, b, c);
    return 0;
}

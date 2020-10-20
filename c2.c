#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, b, p, val = 1;
    printf("enter the base value: ");
    scanf("%d", &b);

    printf("enter the base power value: ");
    scanf("%d", &p);
    for (i = 0; i < p; i++)
    {
        val = val * b;
    }
    printf("power of %d to the power %d=%d ", b, p, val);

    return 0;
}

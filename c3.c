#include <stdio.h>
int main(int argc)
{
    int n, i;
    printf("enter the number to finds its factor: ");
    scanf("%d", &n);
    printf("factors of %d are ", n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
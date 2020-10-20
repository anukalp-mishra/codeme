#include <stdio.h>
int main(int argc, char const *argv[])
{
    int fact = 1, n;
    printf("enter the number to find factorial: ");
    scanf("%d", &n);
    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        printf("factorial of %d=%d\n", n, fact);
    }
    else if (n = 0)
    {
        printf("factorial of %d=%d\n", n, fact);
    }
    else

        printf("factorial of %d does not exist!!");

    return 0;
}

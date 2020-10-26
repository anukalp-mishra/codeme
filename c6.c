#include <stdio.h>
#include <string.h>
int main()
{
    int n,digit,count,temp;
    int ar[100];

    printf("enter the number:");
    scanf("%d",&n);
    temp=n;
    while (temp!=0)
    {
        digit=temp%10;
        ar[100]=digit;
        temp=temp/10;
        printf("%d",ar[100]);
    }
  
    return 0;
}
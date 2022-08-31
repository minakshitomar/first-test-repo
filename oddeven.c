#include<stdio.h>
int main()
{
    int odd, even, num;
    printf("Enter a number to find whether it is odd or even:");
    scanf("%d", &num);
    if(num % 2 == 0)
    {
        printf("It is even");
    }
    else
    {
        printf("It is odd:");
    }
    return 0;
}
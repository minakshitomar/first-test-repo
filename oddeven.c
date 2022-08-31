#include<stdio.h>
int main()
{
    int odd, even, num;
    printf("Enter a number to find whether it is odd or even:");
    scanf("%d", &num);
    if(num % 2 == 0)
    {
        printf("Entered nummber is even");
    }
    else
    {
        printf("Entered number is odd:");
    }
    return 0;
}
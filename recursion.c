//sum of first n natural nos by iteration

#include<stdio.h>

int sum (int n);


int main (void)
{
    int n;
    printf("enter a no. n:");
    scanf("%d",&n);
    printf("%d",sum(n));

}
int sum (int n)
{
    if (n == 0)
        return 0;
    else
        return sum(n-1) + n;

}

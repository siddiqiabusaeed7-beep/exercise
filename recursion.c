//sum of first n natural nos by iteration

#include<stdio.h>

int add (int x);

int main (void)
{
    int n, i = 0, sum = 0;


    printf("enter a number n");
    scanf("%d",&n);

    printf("%d",sum(n));
}

int add (int x)
{
    if(i<n)
    {
        sum = sum + i;
        sum(i+1);
    }
    return sum;

}

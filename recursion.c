//sum of first n natural nos by iteration

#include<stdio.h>

//int sum (int n);
int power(int n , int m);


int main (void)
{
    int n,m;
    printf("enter a no. n:");
    scanf("%d%d",&n,&m);
    printf("%d",power(n,m));
}
/*
int sum (int n)
{
    if (n == 0)
        return 0;
    else
        return sum(n-1) + n;

}
*/

int power(int n, int m)
{
    if(m == 0)
        return 1;   //this means that at pow(n,0) the value will be 
    else
         return power(n,m-1)*n;
}
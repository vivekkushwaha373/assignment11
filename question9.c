#include<stdio.h>
int square(int);
int square(int x)
{
    return x*x;
}
int main ()
{
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    printf("square of a given number is: %d",square(a));
    return 0;
}
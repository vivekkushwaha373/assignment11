#include<stdio.h>
int prime(int a)
{
if(a==1)
{
    printf("number is not prime: ");
    return 0;
}
  for(int j=2;j<=a;j++)
  {
    if(a%j==0 && j!=a)
    {
    printf("number is not prime: ");
    return 0;    
    }
    else 
    {
    printf("number is prime: ");
    return 1;
    }
  }
}
int main()
{
int num;
printf("enter the number: ");
scanf("%d",&num);
printf("%d ",prime(num));
    return 0;
}
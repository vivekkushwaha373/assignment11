#include<stdio.h>
int prime(int a)
{
for(int i=1; ;i++)
{
    for(int j=2;j<=a+i;j++)
    {
      if((a+i)%j==0 && (a+i)!=j)
      break;
      if((a+i)%j==0 && (a+i)==j)
      return j;
    }
}
}
int main()
{
int num;
printf("enter the number: ");
scanf("%d",&num);
printf("the next prime number is %d ",prime(num));
    return 0;
}
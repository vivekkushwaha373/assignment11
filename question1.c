#include<stdio.h>
int lcm(int a,int b)
{
int l=a>b?a:b;
for(int j=l; ;j++)
{
    if(j%a==0 && j%b==0)
    {
        
    return j;
    }
}
}
int main()
{
int num1,num2;
printf("enter the first number: ");
scanf("%d",&num1);

printf("enter the second nmuber: ");
scanf("%d",&num2);
printf("lcm is = %d",lcm(num1,num2));
    return 0;
}
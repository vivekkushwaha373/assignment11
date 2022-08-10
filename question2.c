#include<stdio.h>
int hcf(int a,int b)
{int h;
int l=a>b?a:b;
for(int j=1;j<=l ;j++)
{
    if(a%j==0 && b%j==0)
    {
        h=j;
    
    }
}
return h;
}
int main()
{
int num1,num2;
printf("enter the first number: ");
scanf("%d",&num1);

printf("enter the second nmuber: ");
scanf("%d",&num2);
printf("hcf is = %d",hcf(num1,num2));
    return 0;
}
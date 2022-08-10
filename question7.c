#include<stdio.h>
void fibonacci(int);
void fibonacci(int n)
{   int count=0;int c;
    int a=0,b=1;
    if(n==1)
    printf("%d",a);
    if(n==2)
    printf("%d",b);
    if(n>2)
    {
    while(count+2!=n)
    {
        if(count==0)
        {
            printf("%d\n%d\n",a,b);
        }
        c=a+b;
       
        
        printf("%d\n",c);
         a=b;
        b=c;
        count++;
    }
    }
}
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
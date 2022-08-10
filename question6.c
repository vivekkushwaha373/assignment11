#include<stdio.h>
void prime(int,int);
void prime(int a,int b)
{  
    for(int i=a+1;i<b ;i++)
    {
        for(int j=2;j<=i;j++ )
        {
            if(i%j==0&&i!=j)
            break;
            if(i%j==0&&i==j)
            {printf("%d\n",i);
            }
        }
       
    }
}
int main()
{
    int n1,n2;
    printf("enter the first number: ");
    scanf("%d",&n1);
    printf("enter the second number: ");
    scanf("%d",&n2);   
    prime(n1,n2);
}
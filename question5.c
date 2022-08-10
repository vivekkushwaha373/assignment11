#include<stdio.h>
void prime(int);
void prime(int a)
{  int count=0;
    for(int i=2; ;i++)
    {
        for(int j=2;j<=i;j++ )
        {
            if(i%j==0&&i!=j)
            break;
            if(i%j==0&&i==j)
            {printf("%d\n",i);
            count++;
            }
        }
       if(count==a)
       break;
    }
}
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    prime(n);
}
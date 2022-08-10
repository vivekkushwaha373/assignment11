#include<stdio.h>
void pascal(int );
void pascal(int a)
{int k=1,s=1,t=1;
for(int q=1;q<=a;q++)
    printf(" ");
printf("1\n");
    for(int i=1;i<=a;i++)
    {    for(int q=1;q<=a-i;q++)
    printf(" ");
        for(int j=0;j<=i;j++)
        {k=1;s=1;t=1;
            for(int m=1;m<=i;m++)
            {
                k=k*m;
            }
            for(int m=1;m<=i-j;m++)
            {
                s=s*m;
            }
             for(int m=1;m<=j;m++)
            {
                t=t*m;
            }
            printf("%d ",k/(s*t));
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    pascal(n-1);
    return 0;
}
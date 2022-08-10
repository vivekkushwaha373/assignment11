#include<stdio.h>
int seriessum(int a)
{ int k=1,s=1;
    for(int i=1;i<a;i++)
    {   k=1;
        for(int j=1;j<=i;j++)
        {
            k=k*j;
            
        }
        s=s+k;
    }
    return s;
}
int main()
{int a,num;
printf("enter a number upto sum is required: ");
scanf("%d",&a);
num=seriessum(a);
printf("sum of series is %d",num);


    return 0;
}
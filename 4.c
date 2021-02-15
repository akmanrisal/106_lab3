#include<stdio.h>
int main()
{
    int x,i,j=2,a;

    scanf("%d",&x);
     if(x==1)
     printf("1");

    for(i=1; i<=x; i++)
    {
        for(j=2; j<=i; j++)
            if(i%j==0)
                break;
            if(i==j)
                a=i;
    }
    if(x!=1)
    printf("%d",a);

    return 0;
}


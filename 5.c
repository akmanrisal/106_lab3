#include<stdio.h>
int main()
{
    int x,i,j;

    scanf("%d",&x);

    int p[x];

    for(i=2; i<=x; i++)
    {
        for(j=0; j<x; j++)
        {
            if(i%2==1)
            {
                p[j]=i;
               // printf("%d\n",p[j]);
                break;
            }
        }
    }
         printf("%d\n",p[j]);

}

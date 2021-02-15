#include<stdio.h>
int main()
{
    int k,i=2;

    scanf("%d",&k);
    if(k==1)
        printf("1\n");
    while(k>1)
    {
        if(k%i==0)
        {
            printf("%d\n",i);
            k/=i;
        }
        else
            i++;
    }

    printf("0");
    return 0;
}

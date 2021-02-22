#include<stdio.h>
int main()
{
    int i,j,a=0,b=0,c=0,d=0,e=0;
    int numi[4],numj[5];

   for(j=1;j<=5;j++)
   {
       for(i=0;i<4;i++)
        {
            scanf("%d",&numi[i]);
            if(j==1)
                a=a+numi[i];
            else if(j==2)
                b=b+numi[i];
            else if(j==3)
                c=c+numi[i];
            else if(j==4)
                d=d+numi[i];
            else
                e=e+numi[i];
        }
    }

    if(a>b&&a>c&&a>d&&a>e)
        printf("1 %d",a);
    else if(b>a&&b>c&&b>d&&b>e)
        printf("2 %d",b);
    else if(c>a&&c>b&&c>d&&c>e)
        printf("3 %d",c);
     else if(d>a&&d>b&&d>c&&d>e)
        printf("4 %d",d);
    else
        printf("5 %d",e);



}

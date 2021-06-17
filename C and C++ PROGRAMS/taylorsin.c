#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    int i,n;
    float x,t,sum;
    scanf("%f",&x);
    printf("Enter the value for n\n");
    scanf("%d",&n);
    x=x*3.14159/180;
    t=x;
    sum=x;
    for(i=1;i<=n;i++)
    {
        t=(t*(-1)*x*x)/(2*i*(2*i+1));
        sum+=t;
    }
    printf("The value of sin from library function is %f\n",sin(x));
    printf("The value by program is %f",sum);

}

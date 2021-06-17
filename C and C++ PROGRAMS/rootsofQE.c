#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
    float a,b,c,real,img,D;
    scanf("%f%f%f",&a,&b,&c);
    if(a==0&&b==0)
    {
        printf("NOSOLUTION");
        exit(0);
    }
    if(a==0&&b!=0)
    {
        printf("The root is %f",-c/b);
        exit(0);
    }
    D=(b*b-4*a*c);
    real=-b/(2*a);
    img=sqrt(abs(D))/(2*a);
    if(D>0)
        printf("roots are real and they are %.3f%+.3f and %.3f%+.3f",real,img,real,-img);
    else if(D<0)
    printf("ROOTS ARE COMPLEX AND THEY ARE %.3f%+.3fi and %.3f%+.3fi",real,img,real,-img);
    else
        printf("rOOTS Are real and they are %f %f",real,real);
}

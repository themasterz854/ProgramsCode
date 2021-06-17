#include<stdio.h>
#include<math.h>
struct point
{
    int x,y;
}p1,p2;
float indis(struct point,struct point);

void main()
{

float D;
printf("Enter the point\n");
scanf("%d%d%d%d",&p1.x,&p1.y,&p2.x,&p2.y);
D=indis(p1,p2);
printf("%f",D);
}
float indis(struct point p1,struct point p2)
{
    float d;
    d=sqrt(pow((p2.x-p1.x),2)+pow((p2.y-p1.y),2));
    return d;
}

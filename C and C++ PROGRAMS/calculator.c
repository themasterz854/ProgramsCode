#include<stdio.h>
#include<stdlib.h>
void main()
{

 float a,b,res;
 int ch;
 printf("Enter the numbers \n");
 scanf("%f%f",&a,&b);
 printf("1.ADD\n2.SUBTRACT\n3.MULTIPLY\n4.DIVIDE\n5.MODULUS\n");
 scanf("%d",&ch);
 if((ch==4||ch==5)&&b==0)
 {
     printf("dIVIDE by zeRo error");
     exit(0);
 }
 switch(ch)
 {
     case 1 : res=a+b;
     break;
     case 2 : res=a-b;
     break;
     case 3 : res=a*b;
     break;
     case 4 : res=a/b;
     break;
     case 5 : res=(int)a%(int)b;
     break;
     default : printf("INVALID CHOICE");
     exit(0);
 }
 printf("The result is %f",res);
}

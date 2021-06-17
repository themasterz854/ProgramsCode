#include<stdio.h>
#include<math.h>

int convertBinaryToDecimal(long long n);
int decimal_Number=0,weight=0 ;
int main()
{
long long n;
printf("Enter a binary number: \n");
scanf("%lld",&n);
printf("%lld in binary = %d in decimal",n,convertBinaryToDecimal(n));
return 0;
}
int convertBinaryToDecimal(long long n)
{
 int remainder;
 if(n!=0)
  {
   remainder=n%10;
   n/=10;
   decimal_Number+=remainder*pow(2,weight);
   weight++;
   convertBinaryToDecimal(n);
   return decimal_Number;
  }
else return decimal_Number;
}
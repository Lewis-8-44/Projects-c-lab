#include<stdio.h>
int main () {
   int n;
   printf("Enter an odd number\n");
   scanf("%d",&n);
   int sum=0;
   int i;
   for(i=1;i<=n;i+=2) {
   sum=sum+i;}
   printf("Summation of %d natural numbers is %d",n,sum);
   return 0;
}

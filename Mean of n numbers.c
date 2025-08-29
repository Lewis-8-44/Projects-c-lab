#include<stdio.h>
int main () {
   int n,av;
   printf("Enter a natural number\n");
   scanf("%d",&n);
   int sum=0;
   int i;
   for(i=1;i<=n;i++) {
   sum=sum+i;}
   av=(sum)*(1/n);
   printf("Summation of %d natural numbers is %d and mean is %d",n,sum,av);
   return 0;
}

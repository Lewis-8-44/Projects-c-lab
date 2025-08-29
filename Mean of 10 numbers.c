#include<stdio.h>
int main () {
   int n,av;
   int sum=0;
   int i;
   for(i=1;i<=10;i++) {
   sum=sum+i;}
   av=(sum)*(1/10);
   printf("Summation of %d natural numbers is %d and mean is %d\n",n,sum,av);
   return 0;
}

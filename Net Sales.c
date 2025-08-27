#include<stdio.h>
   int main () {

   int g,n,d;

   printf("Enter Amount of Gross Sales",g);
   scanf("%d",&g);
   d=g*0.1;
   n=g-d;
   printf("The Net Sales is %d",n);
   return 0;
   }

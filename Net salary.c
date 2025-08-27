#include<stdio.h>
   int main () {

   int g,n,a,d;

   printf("Enter Amount of Gross Salary",g);
   scanf("%d",&g);
   a=g*0.1;
   d=g*0.003;
   n=g+a-d;
   printf("The Net Salary is %d",n);
   return 0;
   }

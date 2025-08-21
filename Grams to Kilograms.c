#include<stdio.h>
 int main ()  {

     int grams,kilograms,gramsleft;
     printf("Enter Amount in Grams");
     scanf("%d",&grams);

      kilograms = grams/1000;
      gramsleft = grams%1000;


    printf("%d grams = %d kilograms and %d grams",grams,kilograms,gramsleft);

    return 0;

 }

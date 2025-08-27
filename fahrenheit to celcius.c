#include<stdio.h>
 int main ()  {

     int fahrenheit,celcius;
     printf("Enter temperature in fahrenheit");
     scanf("%d",&fahrenheit);
    celcius=(fahrenheit-32)*5/9;


    printf("%d fahrenheit = %d celcius",fahrenheit,celcius);

    return 0;

 }

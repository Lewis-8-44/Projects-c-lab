#include<stdio.h>
 int main ()  {

     int fahrenheit,celcius;
     printf("Enter temperature in celcius");
     scanf("%d",&celcius);

    fahrenheit = (9/5*celcius)+32;


    printf("%d celcius  = %d fahrenheit",celcius,fahrenheit);

    return 0;

 }

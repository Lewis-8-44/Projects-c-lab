#include<stdio.h>
 int main ()  {

     int minutes,hours,minutesleft;
     printf("Enter Number of Minutes");
     scanf("%d",&minutes);

     hours = minutes/60;
     minutesleft = minutes % 60;

    printf("%d hours and %d minutes left = %d minutes",hours,minutesleft,minutes);

    return 0;

 }


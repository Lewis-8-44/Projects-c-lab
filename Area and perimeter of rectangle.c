#include<stdio.h>
 int main ()  {

     int l,b,a,p;
     printf("Enter length and breadth of rectangle");
     scanf("%d%d",&l,&b);

    a = l*b;
    p = 2*(l+b);

     printf("the rectangle of lenght %d m and breadth %d m has area %d sq m and perimeter %d m ",l,b,a,p);

    return 0;

 }

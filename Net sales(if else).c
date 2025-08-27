#include<stdio.h>
    int main() {
     int g,d;
    printf("Enter gross sales");
    scanf("%d",&g);

    if(g>20000) {
      d=g*0.15;
      printf("%d is the net sales",g-d); }
    else if(g>10000) {
      d=g*0.1;
      printf("%d is the net sales",g-d); }
    else if(g<10000) {
      d=g*0.05;
      printf("%d is the net sales",g-d);
      };
 return 0;
 }

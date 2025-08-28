#include<stdio.h>
int main() {

   int a,b;
   printf("Enter a number\n");
   scanf("%d",&a);
   printf("Enter a number\n");
   scanf("%d",&b);

   if(a>b) {
     printf("%d is the largest number",a);}
   else if(b>a) {
     printf("%d is the largest number",b);}

    return 0;

}

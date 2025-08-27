#include <stdio.h>

void main() {
    float a,b,c;

    printf("Enter the values of a\n");
    scanf("%f",&a);
    printf("Enter the values of b\n");
    scanf("%f",&b);
    printf("The sum of %f a and %f b is %f\n",a,b,a+b);
    printf("The difference of %f a and %f b is %f\n",a,b,a-b);
    printf("The product of %f a and %f b is %f\n",a,b,a*b);

    if (b== 0) {
        printf("Error! Division by zero is not allowed.\n");
    } else {
         c=a/b;
        printf("%f/%f = %f\n",a,b,c);
    }
}

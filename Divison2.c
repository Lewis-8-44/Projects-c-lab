#include <stdio.h>

void main() {
    float a,b,c;

    printf("Enter the values of a\n");
    scanf("%f",&a);
    printf("Enter the values of b\n");
    scanf("%f",&b);

    if (b== 0) {
        printf("Error! Division by zero is not allowed.\n");
    } else {
         c=a/b;
        printf("Result: %.2f / %.2f = %.2f\n",a,b,c);
    }

}

#include <stdio.h>

int main() {
    float a,b,c;

    printf("Enter the values of a and b ");
    scanf("%f%f",&a,&b);

    if (b== 0) {
        printf("Error! Division by zero is not allowed.\n");
    } else {
         c=a/b;
        printf("Result: %.2f / %.2f = %.2f\n",a,b,c);
    }

    return 0;
}



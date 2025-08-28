#include<stdio.h>
int main () {
    int p,c,m,a,t;
    printf("Enter marks of Physics\n");
    scanf("%d",&p);
    printf("Enter marks of Chemistry\n");
    scanf("%d",&c);
    printf("Enter marks of Maths\n");
    scanf("%d",&m);
    t=p+c+m;
    a=p+c+m*(1/3);
    if(a>=70) {
     printf("Grade:Distinction Result:Pass");}
    else if(a>=60) {
     printf("Grade:First Result:Pass");}
    else if(a>=50) {
     printf("Grade:Second Result:Pass");}
    else if(a>=35) {
     printf("Grade:Third Result:Pass");};
    else if(a<35)  {
     printf("Result:Fail");
    };

}

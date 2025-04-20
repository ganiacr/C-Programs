#include <stdio.h>
#include <math.h>
double sum(double a,double b){
double c = a + b;
return c;
}
double diff(double a,double b){
double c=a-b;
return c;
}
double product(double a,double b){
    double c=a*b;
return c;
}
double dvn(double a,double b) {
if (a && b != 0) {
    double c = a/b;
    return c;}
else{ printf("You can't divide by zero!!\n");
return 0;}
}
int main() { 
char o;
double a;
double b;
printf("Enter an operator (+ - / *):");
scanf("%c",&o);
printf("Enter the first number:");
scanf("%lf",&a);
printf("Enter the second number:");
scanf("%lf",&b);
switch(o){
case '+' :
 printf("%lf",sum(a,b));
break;
case '-': 
printf("%lf",diff(a,b));
break;
case '*':
printf("%lf",product(a,b));
break;
case '/':
printf("%lf",dvn(a,b));
break;
default:
printf("Enter valid inputs!!");
break;
}
return 0;
}

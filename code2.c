//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main(){
    float num1,num2;
    float sum,difference,product,quotient;
    printf("enter first number:");
    scanf("%f",&num1);
    printf("enter second number:");
    scanf("%f",&num2);
    sum = num1+num2;
    difference = num1-num2;
    product = num1*num2;
    quotient = num1/num2;
    printf("sum is:%f\n",sum);
    printf("difference is:%f\n",difference);
    printf("product is:%f\n",product);
    printf("quotiont is:%f\n",quotient);
    return 0;

}
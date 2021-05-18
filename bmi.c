#include <stdio.h>
#include <cs50.c>
int main (void){
int m;
float h;
m=get_int("Enter your weight: ");
h=get_float("Enter your height in meters: ");
float b=m/(h*h);
printf("BMI is %2f\n", b);
if (b < 18.5){
    printf("Your BMI is %2f", b);printf(".You are underweight.");
    }
 else if (b<18.5 && b<24.9){
    printf("Your BMI is %2f", b);printf(".You are normal.");
    }
    else if (b<25 && b<29.9){
    printf("Your BMI is %2f", b);printf(".You are overweight.");}
else if (b>30){
    printf("Your BMI is %2f", b);printf(".You are obese.");
    }
return 0;
}


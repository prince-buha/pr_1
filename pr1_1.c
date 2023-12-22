/*
Q.1 Write a Program to convert temperature from degrees Celsius to Fahrenheit.
Use formula for °C to °F is: ° F = ( °C × 9/5 ) + 32
For example,
Input:
The temperature in Celcius: 38

Output: 
The temperature in Fahrenheit: 100.4
*/

#include<stdio.h>

main(){
	float c,f;
	printf("enter your tempercture:- ");
	scanf("%f",&c);
	
	 f = ( c * 9/5 )+32;
	 
	 printf("the c is %f",f);
	 
}

/*
Q.3 Write C Program to find the third angle of triangle if two other angles are given.
For example,
Input:
First angle: 65
Second angle: 45 

Output: 
Third angle: 70
*/


#include<stdio.h>

main(){
	int angle1,angle2,angle3;
	int angle=180;
	printf("enter your first angle :-");
	scanf("%d",&angle1);
	printf("enter your second angle :-");
	scanf("%d",&angle2);
	
	angle3=(angle-angle1-angle2);
	printf("third angle %d",angle3);
	
	
	
	
	
}

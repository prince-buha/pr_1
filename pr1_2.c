/*
Q.2 Write C Program to find gross salary by adding % of HRA, DA, and TA of user choice.
For example,
Input:
Base Salary: 1000
HRA=10%
DA=5%
TA=8%

Output: 
Rs. 1230
	*/

#include<stdio.h>


main(){
	int bs;
	int hrs,da,ta;
	printf("enter your salary:-",bs);
	scanf("%d",&bs);
	
	hrs = (bs*10)/100;
	da = (bs*5)/100;
	ta = (bs*8)/100;
	
	bs=hrs+da+ta+bs;
	printf("answer is %d",bs);



}
	

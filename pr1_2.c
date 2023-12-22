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
	

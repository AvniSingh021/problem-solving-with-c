#include<stdio.h>
int main(){
	int unit_range=0;float cost;
	printf("enter the range:");
	scanf("%d",&unit_range);
	if(unit_range<=100){
		cost=unit_range*2.40;
		printf("%f",cost);
	}
	else if(unit_range<=250){
		cost=unit_range*3.20;
		printf("%f",cost);
	}
	else if (unit_range<=500){
		cost=unit_range*4.60;
		printf("%f",cost);
	}
	else 
	cost=unit_range*5.80;
	printf("%f",cost);
	return 0;
}

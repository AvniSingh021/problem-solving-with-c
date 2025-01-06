#include<stdio.h>
int main(){
	int num,digits[5],i=0;
	printf("enter a five_digit number:");
	scanf("%d",&num);
	if(num<1000||num>99999){
		printf("please enter a vaild five_digit number:\n");
		return 1;
	}
	while (num>0){
		digits[i]=num%10;
		num/=10;
		i++;
	}
	printf("the digitd of the number are:\n");
	int j;
	for(j=i-1;j>=0;j--){
		printf("%d\n",digits[j]);
	}
	return 0;
}

#include<stdio.h>
int reverseNumber (int n){
	int reversed =0, remainder;
	while (n!=0){
		remainder=n%10;
		reversed=reversed*10+remainder;
		n/=10;
	}
	return reversed;
}
int main(){
	int num,reversedNum;
	printf("enter a number:");
	scanf("%d",&num);
	reversedNum=reverseNumber(num);
	printf("reversed number:%d\n",reversedNum);
	return 0;
}

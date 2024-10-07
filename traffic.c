#include<stdio.h>
int main(){
	char light;
	printf("enter traffic light system:");
	scanf("%c",&light);
	if (light=='G')
	{
		printf("green-> Go");
	}
	else if (light=='Y'){
		printf("yellow-> wait");
	}
	else if (light=='R'){
		printf("red->stop");
	}
	else {
		printf("invalid choice");
	}
	return 0;
	
}

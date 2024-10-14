#include<stdio.h>
int main(){
	float side1,side2,side3;
	int triangleType;
	printf("enter the three side of the triangle:");
	scanf("%f%f%f",&side1,&side2,&side3);
	if(side1+side2<=side3||side1+side3<=side2||side2+side3<=side1){
		printf("the given side do not form a triangle.\n");
		return 1;
	}
	if(side1==side2&&side2==side3){
		triangleType=1;
	}
	else if(side1==side2||side2==side3||side1==side3){
		triangleType=2;
	}
	else{
		triangleType=3;
	}
	switch(triangleType){
		case 1:
			printf("equilateral");
			break;
			case 2:
				printf("isosceles");
				break;
				case 3:
					printf("scalene");
					break;
					default:
						printf("invalid");
						break;
	}
	return 0;
}

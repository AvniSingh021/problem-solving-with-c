#include<stdio.h>
#include<math.h>
int main(){
	int x,y;
	printf("enter base (x):");
	scanf("%d",&x);
	printf("enter exponent(y):");
	scanf("%d",&y);
	
	if (x > 0 && y > 0){
		double result= pow(x,y);
		printf("%d raise to the power %d=%.21f\n",x,y,result);
	}
	else{
		printf("error: both x nd y must be positive intger \n");
	}
	return 0;
}

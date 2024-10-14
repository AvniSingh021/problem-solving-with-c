#include<stdio.h>
int main(){
	int a;
	printf("enter the grade:");
	scanf("%d",&a);
	switch(a/10)
	{
		case 9:
			printf("A");
			break;
			case 8:
				printf("B");
				break;
				case 7:
					printf("C");
					break;
					case 6:
						printf("D");
						break;
						case 5:
							printf("fail");
							break;
							default:
								printf("fail");
							
	}
	return 0;
	
}

#include<stdio.h>
int main(){
	int i,j,row,column;
	printf("enter the row");
	scanf("%d",&row);
	printf("enter the column");
	scanf("%d",&column);
	int array[row][column];
	printf("enter the element of an array");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			scanf("%d",&array[i][j]);
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	 search( array);

}

void search(int array[][]){
		int ser;
	printf("enter the ser element");
	scanf("%d",&ser);
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			if(ser==array[i][j]){
				printf("%d is your element",array[i][j]);
			}
		}
	}
}

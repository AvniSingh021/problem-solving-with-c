#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int randomNumber,userGuess,guessCount=0;
	srand(time(0));
	randomNumber=rand()%100+1;
	printf("welcome to the number gussing game:\n");
	printf("guess a number between 1 and 100\n");
	do{
		printf("enter your guess:");
		scanf("%d",&userGuess);
		guessCount++;
		if(userGuess>randomNumber){
			printf("lower number please\n");
		}
		else if(userGuess<randomNumber){
			printf("higher number please\n");
		}
		else{
			printf("congraulation! you gussed the number in %d tried\n ", guessCount);
		}
	} while (userGuess!=randomNumber);
	return 0;
}

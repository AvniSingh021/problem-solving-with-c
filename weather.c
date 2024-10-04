#include<stdio.h>
int main(){
    int temp;
    printf("enter the temp in centigrade:");
    scanf("%d",&temp);
    if (temp<0){
        printf("very very cold");
    }
    else if(temp<=10){
        printf("very cool");
    }
    else if(temp<=20){
        printf("cool");
    }
    else if(temp<=30){
            printf("normal");
    }
    else
        printf("hot");
    return 0;

}

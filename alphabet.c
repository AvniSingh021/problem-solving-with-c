#include<stdio.h>
int main(){
    char ch;
    printf("enter to check weather a character is an alphabet,digit or special character");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'){
        printf("this is an alphabet");
    }
    else if(ch>=0&&ch<=9){
        printf("this is a digit");
    }
    else{
    printf("this is a special charactar");
    }
    return 0;
}

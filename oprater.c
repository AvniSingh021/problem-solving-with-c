#include<stdio.h>
int main(){
    int a,b;
    char ch;
    printf("enter the two no:");
    scanf("%d%d",&a,&b);
    printf("enter oprater");
    scanf(" %c",&ch);
    switch(ch)
    {
        case '+':
        printf("%d", (a+b));
        break;
        case '-':
        printf("%d",(a-b));
        break;
        case '*':
        printf("%d",(a*b));
        break;
        case '/':
        printf("%d",(a/b));
        break;
        default:
        printf("wrong answer");
    }
    return 0;
}

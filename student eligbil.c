#include<stdio.h>
int main(){
    int maths,physic,chem,total,math_phy_total;
    printf("enter marks obtained in maths:");
    scanf("%d",&maths);
    printf("enter marks obtained in physic:");
    scanf("%d",&physic);
    printf("enter marks obtained in chem:");
    scanf("%d",&chem);
    total=maths+physic+chem;
    math_phy_total=maths+physic;
    printf("Total marks is :%d\n", total);
    printf("Total maths and physics :%d\n", math_phy_total);
    if(maths>=65&&physic>=55&&chem>=50&&maths+physic>=140){
        printf("you are eligible:");
    }
    else
        printf("you are not eligble");
    return 0;
}

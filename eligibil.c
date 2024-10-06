#include<stdio.h>
int main(){
    int roll,phy,chem,computer_app;
    char name[50];
    printf("input the roll no of the student:");
    scanf("%d",&roll);
    printf("input the name of student:");
    scanf("%s",name);
    printf("input the marks of phy,chem and computer_app:");
scanf("%d%d%d",&phy,&chem,&computer_app);
 int total_marks = phy+chem+computer_app;
float per=(total_marks/300.0)*100;
printf("roll no.%d\n",roll);
printf("name of student %s\n",name);
printf("marks in phy%d\n",phy);
printf("marks in chem%d\n",chem);
printf("marks in computer_app%d\n",computer_app);
printf("percentage:%f\n",per);
if(per<=39)
{
    printf("third devision");
}
else if(per<=59)
{
    printf("second devision");
}
else 
printf("first devision");
return 0;

}
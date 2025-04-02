#include<stdio.h>
struct student{
int rollno;
char name[20];
float cgpa;
}student;
int main(){
struct student s1;
printf("enter roll no:");
scanf("%d",&s1.rollno );
printf("enter the name:");
scanf("%s",s1.name);
printf("enter the cgpa:");
scanf("%f",&s1.cgpa);
printf("the student details");
printf("\nname:\t%s",s1.name);
printf("\n roll no:\t%d",s1.rollno);
printf("\n cgpa:\t%f",s1.cgpa);
return 0;
}

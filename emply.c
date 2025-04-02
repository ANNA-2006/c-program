#include<stdio.h>
struct employee{
int id;
char name[20];
float salary;
};
int main(){
int n,i;
printf("enter the no of employees");
scanf("%d",&n);
struct employee e1[n];
for(i=0;i<n;i++){

printf("enter the id:");
scanf("%d",&e1[i].id );
printf("enter the name:");
scanf("%s",e1[i].name);
printf("enter the salary:");
scanf("%f",&e1[i].salary);
}
printf("the employee details");
for(int i=0;i<n;i++){
printf("\nname:%s",e1[i].name);
printf("\n id:%d",e1[i].id);
printf("\n salary:%f",e1[i].salary);
}
return 0;
}

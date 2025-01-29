#include<stdio.h>
int main(){
int num1,num2,num3;
printf("\n Enter a number");
scanf("%d",&num1);
printf("\n Enter a number");
scanf("%d",&num2);
printf("\n Enter a number");
scanf("%d",&num3);
if(num1>num2){
if(num1>num3){
printf("larger is first number");
}
}
else if (num2>num3){

printf("larger is second number");
}
else {
printf("larger is third number");
}

return 0;
}


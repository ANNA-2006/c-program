#include<stdio.h>
int main(){
int num1,num2;
char operator;
printf("\n Enter a number");
scanf("%d",&num1);
printf("\n Enter a number");
scanf("%d",&num2);
printf("\n Enter an operator");
scanf(" %c",&operator);
switch(operator)
{
case '+':
printf("%d+%d=%d",num1,num2,num1+num2);
break;
case '-':
printf("%d-%d=%d",num1,num2,num1-num2);
break;
case '*':
printf("%d*%d=%d",num1,num2,num1*num2);
break;
case '%':
printf("%d%%%d=%d",num1,num2,num1%num2);
break;
case '/':
printf("%d/%d=%d",num1,num2,num1/num2);
break;
default:
printf("INVALID OPERATION");
}
return 0;
}




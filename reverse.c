#include<stdio.h>
int main(){
char str [100];
printf("enter a string");
fgets(str,sizeof(str),stdin);
int length;
for(length=0;str[length]!='\0';length++);
int i=length-1;
for(int j=0;j<length/2;j++){
int temp=str[i];
str[i]=str[j];
str[j]=temp;
i--;
}
printf("reversed string :");
puts(str);
return 0;
}

#include<stdio.h>
#include<string.h>
int main(){
char str1[100];
char str2[100];
printf("enter first string :");
scanf("%s",str1);
printf("enter second string:");
scanf("%s",str2);
int result=strcmp(str1,str2);
if(result==0){
printf("the strings are equal,\n");
}
 else if(result<0){
printf("the first string is less than second string.\n");
}
else{
printf("the first string is greater than second string.\n");
}
return 0;
}

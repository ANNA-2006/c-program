#include<stdio.h>
int main(){
  int i,limit,max,min,maxpos,minpos;
  printf("\n enter the limit");
  scanf("%d",&limit);
  int num[limit];
  printf("enter the elements");
  for(i=0;i<limit;i++){
    scanf("%d",&num[i]);
 } 
 min=num[0];
 max=num[0];
 
 for(i=1;i<limit;i++)
 {
 if(num[i]<min)
 {
 min=num[i];
 minpos=i;
 }
 if(num[i]>max){
 max=num[i];
 maxpos=i;
 }
 }
 
 printf("\n maximum is : %d", max);
 printf("\n The position is : %d", maxpos+1);
 printf("\n minimum is : %d",min);
 printf("\n The position is : %d",minpos+1);
 
 return 0;
 }
 

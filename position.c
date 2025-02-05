#include<stdio.h>
int main(){
int num,i,n;
printf("\n enter the number of elements");
scanf("%d",&num);
int arr[num];
printf("\n enter  elements");
for(i=0;i<num;i++){
scanf("%d",&arr[i]);
}
printf("\n enter number to search");
scanf("%d",&n);

for(i=0;i<num;i++)
{
if(num==arr[i]){
printf("\n the position is : %d",i+1);
}
}
return 0;
}

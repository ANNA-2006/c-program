#include<stdio.h>
int main(){
int lim,i;
printf("enter the limit");
scanf("%d",&lim);
int arr[lim];
printf("enter the elements");
for(i=0;i<lim;i++){
scanf("%d",&arr[i]);
}
for(int i=0;i<lim-1;i++){
for(int j=0;j<lim-i;j++){
if(arr[j]>arr[j+1]){
int temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
printf("\n the sorted array is : \t");
for(int i=0;i<lim;i++){
printf("%d\t",arr[i]);
}


return 0;
}


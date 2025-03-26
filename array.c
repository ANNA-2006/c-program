#include<stdio.h>
int calculate_sum(int arr[],int size)
{
int sum=0;
for(int i=0;i<size;i++){
sum+=arr[i];
}
return sum;
}
int main(){
int size ;
int i;
printf(" enter the size of array");
scanf("%d",&size);
printf("enter the elements");
int array[size];
for( i =0;i<size;i++){
scanf("%d",&array[i]);
}
int sum=calculate_sum(array,size);
printf(" the sum of array elements is %d\n",sum);
return 0;
}

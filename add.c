#include<stdio.h>
int main(){
int i,j,row,col;
printf("\n enter no of row and col");
scanf("%d %d",&row,&col);
int matrix1[row][col],matrix2[row][col],matrix3[row][col];
printf("\n enter the elements of matrix 1");
for(i=0;i<row;i++){
for(j=0;j<col;j++){
scanf("%d",&matrix1[i][j]);
}
}
printf("\n enter the elements of matrix 2");


for(i=0;i<row;i++){
for(j=0;j<col;j++){
scanf("%d",&matrix2[i][j]);
}
}
for(i=0;i<row;i++){
for(j=0;j<col;j++){
matrix3[i][j]=matrix1[i][j]+matrix2[i][j];

}}
printf("the first matrix is:");
printf("\n");
for( i=0;i<row;i++){
for( j=0;j<col;j++){
printf("%d\t",matrix1[i][j]);
}

printf("\n");
}
printf("\n the second matrix is:");
printf("\n");

for( i=0;i<row;i++){
for( j=0;j<col;j++){
printf("%d\t",matrix2[i][j]);
}

printf("\n");
}
printf("\n the added matrix:");
printf("\n");

for( i=0;i<row;i++){
for( j=0;j<col;j++){
printf("%d\t",matrix3[i][j]);
}
printf("\n");
}
return 0;
}

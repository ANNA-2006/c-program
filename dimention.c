#include<stdio.h>
int main(){
int i,j,row,col;
printf("\n enter no of row and col");
scanf("%d %d",&row ,&col);
int matrix [row][col];
printf("\n enter the elements");
for (int i=0;i<row;i++){
for(int j=0;j<col;j++){
scanf("%d",&matrix[i][j]);
}
}

for(int i=0;i<row;i++){
for(int j=0;j<col;j++){
if(i==j){
matrix[i][j]=0;
}
}
}
for( i=0;i<row;i++){
for( j=0;j<col;j++){
printf("%d\t",matrix[i][j]);
}

printf("\n");
}
return 0;
}

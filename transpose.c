#include<stdio.h>
int main(){
int i,j,row,col;
printf("\n enter no of row and col");
scanf("%d %d",&row,&col);
int matrix1[row][col];
printf("\n enter the elements of matrix 1");
for(i=0;i<row;i++){
for(j=0;j<col;j++){
scanf("%d",&matrix1[i][j]);
}
}
printf("\n the matrix is:");
printf("\n");
for(i=0;i<row;i++){
for(j=0;j<col;j++){
printf("%d \t",matrix1[i][j]);
}
printf("\n");
}
printf("\n the transpose matrix is:");
printf("\n");
for(i=0;i<row;i++){
for(j=0;j<col;j++){
printf("%d \t",matrix1[j][i]);
}

printf("\n");
}

return 0;
}

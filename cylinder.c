#include<stdio.h>
#define pi 3.141159
int main(){
int radius1,area1,height;
printf(" enter the radius:");
scanf("%d",&radius1);
area1=pi*radius1*radius1;
printf("area of circle is:%d\n",area1);
printf("enter the height:");
scanf("%d",&height);
int radius2,area2;
printf("enter the radius");
scanf("%d",&radius2);
area2=2*pi*radius2*height+2*pi*radius2*radius2;
printf("area of cylinder is:%d\n",area2);
return 0;
}

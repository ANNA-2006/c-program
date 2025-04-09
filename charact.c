#include<stdio.h> 
int main(){
FILE *fp;
int wordcount=0,sentence_count=0,line_count=0;
fp=fopen("words.txt","r");
char ch;
while(fscanf (fp,"%c",&ch)==1){
if(ch==' '||ch=='.'){
wordcount++;
}
if(ch=='.'){
sentence_count+=1;
}
if(ch=='\n'){
line_count+=1;
}
}
printf("word_count=%d \n",wordcount);
printf("sentence_count=%d\n",sentence_count);
printf("line_count=%d",line_count);
fclose(fp);
return 0;
}




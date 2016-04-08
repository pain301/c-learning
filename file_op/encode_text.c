#include <stdio.h>
#include <stdlib.h>

void encode(char *s){
	if(s==NULL)
		return ;
	while(*s){
		++*s;
		++s;
	}
}

void decode(char *s){
	if(s==NULL){
		return ;
	}
	while(*s){
		--*s;
		++s;
	}
}

int main(){
	FILE *fp1 = fopen("hello1","r");
	if(fp1==NULL){
		printf("fopen error\n");
		exit(-1);
	}
	FILE *fp2 = fopen("hello2","w");
	if(fp2==NULL){
		printf("fopen error\n");
		exit(-1);
	}
	char buf[1024];
	while(fgets(buf,sizeof(buf),fp1)!=NULL){
		decode(buf);
		fputs(buf,fp2);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}

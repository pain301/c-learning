#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	//fgetc,fputc
	//fputs,fgets 读写配置文件
	//fread,fwrite 大数据块读写
	FILE *fp = NULL;
	char *filename = "hello";
	fp = fopen(filename,"a+");
	if(fp==NULL){
		printf("fopen error\n");
		exit(-1);
	}
	int i = 0;
	char buf[] = "hello world";
	for(i = 0;i<strlen(buf);i++){
		fputc(buf[i],fp);
	}
	fclose(fp);
	
	fp = fopen(filename,"r");
	char c;
	while((c = fgetc(fp))!=EOF){
		printf("%c",c);
	}
	printf("\n");
	fclose(fp);
	return 0;
}

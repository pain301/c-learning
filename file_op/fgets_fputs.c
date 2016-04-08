#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char *filename = "hello";
	FILE *fp = NULL;
	char buf[1024] = {0};
	fp = fopen(filename,"w");
	if(fp==NULL){
		printf("fopen error\n");
		exit(-1);
	}
	while(1){
		//无法输入整行
		//scanf("%s",buf);
		gets(buf);	
		if(strcmp("exit",buf)==0)
			break;
		sprintf(buf,"%s\n",buf);
		fputs(buf,fp);
	}
	fclose(fp);
	
	printf("********************************\n");
	fp = fopen(filename,"r");
	if(fp==NULL){
		printf("fopen error\n");
		exit(-2);
	}
	while(fgets(buf,sizeof(buf),fp)!=NULL){
		printf("%s",buf);
	}
	fclose(fp);
	return 0;
}

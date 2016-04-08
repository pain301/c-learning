#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv){
	if(argc<2){
		fprintf(stderr,"%s filename\n",argv[0]);
		exit(-1);
	}
	char *filename = argv[1];
	char buf[1024];
	//只读方式打开，文件必须存在
	//FILE *fp = fopen(filename,"r");
	//以可读写方式打开，文件必须存在
	//FILE *fp = fopen(filename,"r+");
	//以追加的方式打开，文件不存在的创建
	FILE *fp = fopen(filename,"a");
	if(fp==NULL){
		fprintf(stderr,"%s open failed\n",filename);
		exit(-1);
	}
	fgets(buf,sizeof(buf),fp);
	fputs("pppp",fp);
	printf("%s",buf);
	fclose(fp);
	return 0;
}

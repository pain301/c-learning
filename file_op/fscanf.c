#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv){
	if(argc<2){
		fprintf(stderr,"%s filename\n",argv[0]);
		exit(-1);
	}
	char *filename = argv[1];
	FILE *fp = fopen(filename,"r");
	if(fp==NULL){
		printf("fopen failed\n");
		exit(-1);
	}
	char buf[1024];
	int a;
	int b;
	char c;
	//fscanf与scanf类似，从文件读取
	while(fscanf(fp,"%d %c %d = ",&a,&c,&b)!=EOF){
		printf("%d %c %d\n",a,c,b);
	}
	fclose(fp);
	return 0;
}

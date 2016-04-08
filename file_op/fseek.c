#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv){
	if(argc<2){
		fprintf(stderr,"%s filename\n",argv[0]);
		exit(-1);
	}
	char *filename = argv[1];
	FILE *fp = fopen(argv[1],"r");
	if(fp==NULL){
		printf("fopen error\n");
		exit(-1);
	}
	char buf[1024];
	fseek(fp,5,SEEK_SET);
	int pos = ftell(fp);
	printf("pos = %d\n",pos);
	fgets(buf,sizeof(buf),fp);
	printf("%s",buf);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv){
	if(argc<3){
		fprintf(stderr,"%s filename1 filename2\n",argv[0]);
		exit(-1);
	}
	char *readfile = argv[1];
	char *writefile = argv[2];
	FILE *read_fp = fopen(readfile,"r");
	FILE *write_fp = fopen(writefile,"w");
	char buf[1024];
	while(!feof(read_fp)){
		size_t size = fread(buf,sizeof(char),sizeof(buf),read_fp);
		fwrite(buf,sizeof(char),size,write_fp);
	}
	fclose(read_fp);
	fclose(write_fp);
	return 0;
}

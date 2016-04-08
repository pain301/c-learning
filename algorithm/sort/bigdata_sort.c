#include <stdio.h>
#include <stdlib.h>

void generate_bigdata(char *filename){
	srand(time(NULL));
	FILE *fp = fopen(filename,"w");
	if(fp==NULL){
		printf("fopen error\n");
		exit(-1);
	}
	int i = 0;
	for(;i<1000;i++){
		fprintf(fp,"%d\n",rand()%513);
	}
}

void sort_bigdata(char *readfile,char *writefile){
	FILE *read_fp = fopen(readfile,"r");
	if(read_fp==NULL){
		printf("fopen error\n");
		exit(-1);
	}
	FILE *write_fp = fopen(writefile,"w");
	if(write_fp==NULL){
		printf("fopen error\n");
		exit(-1);
	}
	int val[513] = {0};
	char buf[1024];
	while(fgets(buf,sizeof(buf),read_fp)!=NULL){
		int num = atoi(buf);
		val[num]++;
	}
	int i = 0;	
	for(;i<513;i++){
		while(val[i]--){
			fprintf(write_fp,"%d\n",i);
		}
	}
	fclose(read_fp);
	fclose(write_fp);
}

int main(int argc,char **argv){
	if(argc<3){
		fprintf(stderr,"%s file1 file2\n",argv[0]);
		exit(-1);
	}
	//generate_bigdata(argv[1]);
	sort_bigdata(argv[1],argv[2]);	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(int argc,char **argv){
	if(argc<2){
		fprintf(stderr,"%s filename\n",argv[0]);
		exit(-1);
	}
	char *filename = argv[1];
	struct stat s;
	//获取文件信息
	//可以根据文件大小，动态分配内存进行拷贝
	stat(filename,&s);
	printf("%u\n",s.st_size);
	return 0;
}

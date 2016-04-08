#include <stdio.h>
#include <stdlib.h>

struct student{
	int age;
	char name[100];
};

int main(int argc,char **argv){
	if(argc<2){
		fprintf(stderr,"%s filename\n",argv[0]);
		exit(-1);
	}
	struct student stu[5];
	char *filename = argv[1];
	int i = 0;
	for(;i<5;i++){
		stu[i].age = i+20;	
		sprintf(stu[i].name,"pain_%d",i);
	}
	FILE *fp = fopen(filename,"wb");
	if(fp==NULL){
		printf("fopen error\n");
		exit(-1);
	}
	for(i=0;i<5;i++){
		if(fwrite(&stu[i],sizeof(struct student),1,fp)!=1){
			printf("fwrite error\n");
		}
	}
	fclose(fp);
	
	fp = fopen(filename,"rb");
	if(fp==NULL){
		printf("fopen error\n");
		exit(-1);
	}
	struct student stucp[5];
	for(i=0;i<5;i++){
		//&stucp[i]为读出数据存放位置
		//sizeof(struct student)为一次读取的大小
		//1表示一次读取一个单位
		//第二个参数与第三个参数可以交换，保证乘积不变即可
		//乘积表示要读取的字节数
		fread(&stucp[i],sizeof(struct student),1,fp);
	}
	fclose(fp);
	for(i=0;i<5;i++){
		printf("stu[%d] age: %d name: %s\n",i,stucp[i].age,stucp[i].name);
	}
	
	return 0;
}

#include <stdio.h>

//求单独出现的数字
int main(){
	FILE *fp = fopen("num","r");
	int arr;
	int num = 0;
	int i = 0;
	while(fscanf(fp,"%d",&arr)!=EOF){
		num = num^arr;
	}
	printf("single num is %d\n",num);
	return 0;
}

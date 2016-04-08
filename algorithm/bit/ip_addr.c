#include <stdio.h>

int main(){
	int num1,num2,num3,num4;
	while(scanf("%d.%d.%d.%d",&num1,&num2,&num3,&num4)!=EOF){
		num1 = num1<<24;
		num2 = num2<<16;
		num3 = num3<<8;
		int ip = num1|num2|num3|num4;
		unsigned char *p = (unsigned char *)&ip;
		printf("%u.%u.%u.%u\n",p[3],p[2],p[1],p[0]);
	}
	return 0;
}

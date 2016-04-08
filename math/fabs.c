#include <stdio.h>
#include <math.h>

int main(){
	int num;
	//用__fpurge(stdin)来清除缓冲区
	while(__fpurge(stdin),scanf("%d",&num)!=EOF){
		printf("|%d| = %d\n",num,fabs(num));
	}
	return 0;
}

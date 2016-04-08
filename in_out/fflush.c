#include <stdio.h>

int main(){
	int year;
	//如果输入非数字，导致读取数据失败，但数据仍然存在于缓冲区
	//造成后续读取继续失败，形参死循环
	//gcc可能不支持fflush(stdin)
	while(fflush(stdin),scanf("%d",&year)!=EOF){
		printf("year = %d\n",year);
	}
	return 0;
}

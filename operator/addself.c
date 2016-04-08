#include <stdio.h>

int main(){
	int arr[] = {100,200,300,400,500};
	int *p = arr;
	//先取出数据，然后指针偏移
	printf("*p++ = %d\n",*p++);
	printf("*p = %d\n",*p);
	//将内容自增后取出
	printf("++*p = %d\n",++*p);
	printf("*p = %d\n",*p);
	//先取出内容，再将内容自增
	printf("(*p)++ = %d\n",(*p)++);
	printf("*p = %d\n",*p);
	//将内容自增后取出
	printf("++(*p) = %d\n",++(*p));
	printf("*p = %d\n",*p);
	return 0;
}

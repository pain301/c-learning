#include <iostream>
#include <stdio.h>

int main(){
	double (*a)[3];
	double b[3] = {1,2,3};
	a = &b;

	std::cout<<sizeof(a)<<std::endl;
	std::cout<<sizeof(*a)<<std::endl;
	std::cout<<sizeof(**a)<<std::endl;
	
	printf("a = %0x\n",a);
	printf("a+1 = %0x\n",a+1);

	printf("*a = %0x\n",*a);
	printf("*a+1 = %0x\n",*a+1);

	printf("**a = %lf\n",**a);

	std::cout<<sizeof(b)<<std::endl;
	std::cout<<sizeof(b+1)<<std::endl;

	return 0;
}

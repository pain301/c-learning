#include <stdio.h>
#include <math.h>

//link -lm
int main(){
	double num;
	while(__fpurge(stdin),scanf("%lf",&num)!=EOF){
		int up = ceil(num);
		int low = floor(num);
		printf("ceil of %lf id %d\n",num,up);
	}
	return 0;
}

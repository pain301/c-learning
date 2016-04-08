#include <stdio.h>
#include <math.h>

int main(){
	double a = 3.14159267612345987654321;
	double b = 3.14159267612345987654322;
	if(a==b)
		printf("%lf == %lf\n",a,b);
	else
		printf("%lf != %lf\n",a,b);
	if(fabs(a-b)>=1e-6)
		printf("%lf != %lf\n",a,b);
	else
		printf("%lf == %lf\n",a,b);
	return 0;
}

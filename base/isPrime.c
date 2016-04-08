#include "head.h"

int isPrime(int k)
{
	int n = sqrt(k), i;
	if (k == 1)
		return 0;
	for (i = 2; i <= n; ++i){
		if (k%i == 0){
			return 0;
		}
	}
	return 1;
}
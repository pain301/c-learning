#include <stdio.h>

//定义函数指针类型
typedef int(*fun)(int,int);

int add(int a,int b){
	return a+b;
}

int sub(int a,int b){
	return a-b;
}

int mul(int a,int b){
	return a*b;
}

int dive(int a,int b){
	return a/b;
}

int operator(int a,int b,int(*p)(int,int)){
	return p(a,b);
}

int main(){
	int a,b;
	char c;
	fun p;
	while(scanf("%d%c%d",&a,&c,&b)!=EOF){
		switch(c){
			case '+':
				p = add;
				break;
			case '-':
				p = sub;
				break;
			case '*':
				p = mul;
				break;
			case '/':
				p = dive;
				break;
		}
		printf("%d %c %d = %d\n",a,c,b,p(a,b));
		printf("%d %c %d = %d\n",a,c,b,operator(a,b,p));
	}
	return 0;
}

#include <stdio.h>

int main(){
	//double d = 3.14;
	//printf("%f\n",d);
	printf("%d\n",1000);
	//不会进行数据类型转换
	printf("%f\n",1000);
	printf("%lf\n",1000);
	printf("%e\n",1000);
	printf("*********************\n");
	printf("%d\n",10);
	printf("%D\n",10);
	printf("%x\n",15);
	//十六进制变为大写
	printf("%X\n",15);
	printf("%e\n",10000000.0);
	printf("%E\n",10000000.0);
	printf("%g\n",100000000.0);
	printf("%G\n",100000000.0);
	printf("%c\n",'A');
	printf("%C\n",'A');
	printf("%s\n","ABC");
	//没有输出
	printf("%S\n","ABC");
	printf("*********************\n");
	//占位30，默认右对其，左边空格填充
	printf("%30.7e\n",0.0000001);
	//左边用0填充
	printf("%030.7e\n",0.0000001);
	//左对齐
	printf("%-30.7e\n",0.0000001);
	printf("%-030.7e\n",0.0000001);
	
	printf("*********************\n");
	//缺省的，输出随机数
	printf("%d %d %d\n",1,1);
	
	printf("%\n");
	//只输出一个%
	printf("%%\n");
	
	return 0;
}

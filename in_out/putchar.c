#include <stdio.h>

int main(){
	putchar(0150);
	putchar(0x68);
	//'\ddd'，三位八进制代表的字符
	putchar('\150');
	//'\xMM'，两位十六进制代表的字符
	putchar('\x68');
	return 0;
}

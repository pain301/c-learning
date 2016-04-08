#include <stdio.h>

void replaceSpace(char *p,char *r){
	if(p==NULL)
		return ;
	int len = strlen(r);
	//找到字符串的末端
	char *end = p;
	while(*end)
		++end;
	char *q = end;
	//通过s遍历替换的字符串
	char *s = r;
	while(*p){
		while(*p==' '){
			//从p开始之后的字符都向后移动r的长度减一个字符
			while(q!=p){
				*(q+len-1) = *q;
				--q;
			}
			//用要替换的字符串填充空白区
			while(*s){
				*p++=*s++;	
			}	
			s=r;
			end+=len-1;
			q = end;
		}	
		p++;
	}
}

int main(){
	char buf[100];
	char r[] = "@@@@@";
	while(gets(buf)!=NULL){
		replaceSpace(buf,r);
		printf("after replce:\n");
		printf("%s\n",buf);
	}
	return 0;
}

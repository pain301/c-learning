#include <stdio.h>
#include <string.h>

void isMatch(char *str){
	if(str==NULL)
		return ;
	int len = strlen(str);
	char buf[len];
	int pos = 0;
	while(*str){
		switch(*str){
			case '(':
			case '[':
			case '{':
				buf[pos++] = *str;
				break;
			case ')':
			case ']':
			case '}':
				if((buf[pos-1]=='('&&*str==')')||(buf[pos-1]=='['&&*str==']')||(buf[pos-1]=='{'&&*str=='}')){
					pos--;
					break;
				}else{
					printf("%c无法匹配\n",*str);
					return ;
				}
		}
		str++;
	}
	if(pos)	
		printf("无法匹配\n");
	else
		printf("匹配成功\n");
}

int main(){
	char buf[100];
	while(gets(buf)!=NULL){
		isMatch(buf);		
	}
	return 0;
}

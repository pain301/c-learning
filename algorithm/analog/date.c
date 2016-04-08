#include <stdio.h>
#include <stdlib.h>

//是否是闰年
int isYeap(int year){
	if(year%400==0||(year%100!=0&&year%4==0))
		return 1;
	else
		return 0;
}

//一个月有多少天
int daysOfMonth(int year,int month){
	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 2:
			if(isYeap(year))
				return 29;
			else
				return 28;
		default:
			printf("month data error\n");
			exit(-1);
	}
}

//在一年中的第几天
int daysOfYear(int year,int month,int day){
	int i = 1;
	int sum = 0;
	for(;i<month;i++){
		sum+=daysOfMonth(year,i);
	}	
	sum+=day;
	return sum;
}

//year1到year2年之间的天数
int dstOfTwoYears(int year1,int year2){
	int sum = 0;
	int i = year2;
	for(;i<year1;i++){
		if(isYeap(i))	
			sum+=366;
		else
			sum+=365;
	}
	return sum;
}

//计算两天之间相隔多少天
int dstOfTwoDays(int year1,int month1,int day1,int year2,int month2,int day2){
	int count1 = daysOfYear(year1,month1,day1);
	int count2 = daysOfYear(year2,month2,day2);
	int sum = 0;
	if(year1>year2)	{
		sum+=dstOfTwoYears(year1,year2);
		return sum+count1-count2;
	}else if(year1<year2){
		sum+=dstOfTwoYears(year2,year1);
		return sum+count2-count1;
	}else{
		return abs(count1-count2);
	}
}

//显示一天是星期几
void displayWeekDay(int year,int month,int day){
	int dst = dstOfTwoDays(year,month,day,1970,1,1);
	if(year<1970){
		printf("%d\n",dst);
		dst*=-1;
		dst = dst%7;	
		dst+=7;
	}
	switch(dst%7){
		case 0:
			printf("%4d年%2d月%2d日 是星期四\n",year,month,day);
			break;
		case 1:
			printf("%4d年%2d月%2d日 是星期五\n",year,month,day);
			break;
		case 2:
			printf("%4d年%2d月%2d日 是星期六\n",year,month,day);
			break;
		case 3:
			printf("%4d年%2d月%2d日 是星期日\n",year,month,day);
			break;
		case 4:
			printf("%4d年%2d月%2d日 是星期一\n",year,month,day);
			break;
		case 5:
			printf("%4d年%2d月%2d日 是星期二\n",year,month,day);
			break;
		case 6:
			printf("%4d年%2d月%2d日 是星期三\n",year,month,day);
			break;
	} 
}

int main(){
	int year,month,day;
	scanf("%4d%2d%2d",&year,&month,&day);
	printf("year = %d month = %d day = %d\n",year,month,day);
	displayWeekDay(year,month,day);
	return 0;
}

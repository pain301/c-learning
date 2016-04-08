#ifndef __HEAD_H__ 
#define __HEAD_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>

#define STR_LEN 1000
#define STU_NUM 1000
#define SIZE 100
#define input_a_string  "Please input a string:"

typedef struct StuInfoLink
{
	float score;
	struct StuInfo *next;
}StuInfoNode, *pNode;

typedef struct StuInfo
{
	char sno[20];
	float score;
}StuInfo;

int getStuInfo(StuInfo *s);
int isPrime(int k);

void Q1();
void Q2();
void Q3();
void Q4();
void Q5();
void Q6();
void Q7();
void Q8();
void Q9();
void Q10();
void Q11();
void Q12();
void Q13();
void Q14();
void Q15();
void Q16();
void Q17();
void Q18();
void Q19();
void Q20();
void Q21();
void Q22();
void Q23();
void Q24();
void Q25();
void Q26();
void Q27();
void Q28();
void Q29();
void Q30();
void Q31();
void Q32();
void Q33();
void Q34();
void Q35();
void Q36();
void Q37();
void Q38();
void Q39();
void Q40();
void Q41();
void Q42();
void Q43();
void Q44();
void Q45();
void Q46();
void Q47();
void Q48();
void Q49();
void Q50();
void Q51();
void Q52();
void Q53();
void Q54();
void Q55();
void Q56();
void Q57();
void Q58();
void Q59();
void Q60();
void Q61();
void Q62();
void Q63();
void Q64();
void Q65();
void Q66();
void Q67();
void Q68();
void Q69();
void Q70();
void Q71();
void Q72();
void Q73();
void Q74();
void Q75();
void Q76();
void Q77();
void Q78();
void Q79();
void Q80();
void Q81();
void Q82();
void Q83();
void Q84();
void Q85();
void Q86(); 
void Q87();
void Q88();
void Q89();
void Q90();
void Q91();
void Q92();
void Q93();
void Q94();
void Q95();
void Q96();
void Q97();
void Q98();
void Q99();
void Q100();

void exe();

#endif

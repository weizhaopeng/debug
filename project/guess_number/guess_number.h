/*一款通过提示猜测四个随机数字，保证位置和数字绝对正确
 *游戏附带单人模式和双人模式，能够记录游戏数据和玩家通
 *关信息*/
#ifndef _GUESS_NUMBER_H_
#define _GUESS_NUMBER_H_
/*常用C语言函数库*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>
/*每次尝试也就是进行一次游戏
*游戏者的名字和循环输入的数字数据*/
typedef struct 
{
	char name[15];
	int  number[4];
	int  try_number; 
}TRY;
/*用于显示-A-B的结果*/
typedef struct 
{
	int A;
	int B;
}RESULT; 
/*主菜单界面函数*/	
void guess_num_menu(void);
/*游戏算法函数，一人和双人游戏的集合，兼有显示结果和记录游戏数据*/
void guess_num_mode(void);
/*显示游戏规则*/
void guess_num_rule(void);
/*单人游戏*/
void game_1p(const TRY *ans);
/*双人游戏*/
void game_2p(const TRY *ans);
/*选择游戏模式*/
void guess_num_ganmemode(void);
/*游戏记录函数*/
void guess_num_record_1p(const TRY *try);
void guess_num_record_2p(const TRY *try1,const TRY *try2);

#endif

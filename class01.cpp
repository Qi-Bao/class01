
#include "stdafx.h"
#include "cal.h"
#include<stdlib.h>
#include<time.h>
#include<iostream>


using namespace std;
//void cal_add();

bool cn_coti(char t);
bool en_coti(char t);
bool jp_coti(char t);
int welc();
bool t_s;
char t;
int s;
int a_lang;



int main()
{
	cal calA;
	calA.score = 0;
	a_lang = welc();
	do
	{
		srand((unsigned)time(NULL));
		calA.p = rand() % 10 + 0;
		calA.q = rand() % 10 + 0;
		s = rand() % 4 + 0;
		switch (a_lang)
		{
		case 1:  //English
			cout << "You choice English." << endl;
			switch (s)
			{
			case 0:
				calA.en_cal_add();
				t_s = en_coti(t);
				break;
			case 1:
				calA.en_cal_div();
				t_s = en_coti(t);
				break;
			case 2:
				calA.en_cal_mul();
				t_s = en_coti(t);
				break;
			case 3:
				calA.en_cal_sub();
				t_s = en_coti(t);
				break;
			default:
				break;
			}
			break;
		case 2:   //Chinese
			//cout << "你选择了中文。"<<endl;
            switch (s)
			{
			case 0:
				calA.cn_cal_add();
				t_s = cn_coti(t);
				break;
			case 1:
				calA.cn_cal_div();
				t_s = cn_coti(t);
				break;
			case 2:
				calA.cn_cal_mul();
				t_s = cn_coti(t);
				break;
			case 3:
				calA.cn_cal_sub();
				t_s = cn_coti(t);
				break;
			default:
				break;
			}
			break;
		case 3:  //Japanese
			cout << "あなたの日本语を選択した" << endl;
			switch (s)
			{
			case 0:
				calA.jp_cal_add();
				t_s = jp_coti(t);
				break;
			case 1:
				calA.jp_cal_div();
				t_s = jp_coti(t);
				break;
			case 2:
				calA.jp_cal_mul();
				t_s = jp_coti(t);
				break;
			case 3:
				calA.jp_cal_sub();
				t_s = jp_coti(t);
				break;
			default:
				break;
			}
				break;
		default:
			break;
		}
	} while (t_s);


    return 0;
}
bool cn_coti(char t)
{
	cout << "继续请按0，退出请按其他键";
	cin >> t;
	if (t == '0')
	{
		return true;
	}
	else {
		return false;
	}
}
bool en_coti(char t)
{
	cout << "To continue, please press 0.Exit, please press the other key";
	cin >> t;
	if (t == '0')
	{
		return true;
	}
	else {
		return false;
	}
}
bool jp_coti(char t)
{
	cout << "引き続き0を押してください，他のボタンを押してください脱退";
	cin >> t;
	if (t == '0')
	{
		return true;
	}
	else {
		return false;
	}
}

int welc() {

	int lang;
	cout << "wlecome to Qibao's Class01." << endl;
	cout << "Please choice your language." << endl;
	cout << "1.English 2.Chinese 3.Japanese " << endl;
	cin >> lang;
	return lang;
}

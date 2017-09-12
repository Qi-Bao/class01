#include "stdafx.h"
#include "cal.h"
#include<stdlib.h>
#include<time.h>
#include<iostream>

using namespace std;
//void cal_add();
bool coti(char t);

int s, temp;
bool t_s;
char t;


int main()
{
	cal calA;
	calA.score = 0;
	do
	{
		srand((unsigned)time(NULL));
		calA.p = rand() % 10 + 0;
		calA.q = rand() % 10 + 0;
		s = rand() % 4 + 0;
		cout << calA.q << calA.p << endl;
		cout << s << endl;
		switch (3)
		{
		case 0:
			cout << "加法" << endl;
			cout << calA.p << "+" << calA.q << "=";
			cin >> calA.qans;
			calA.ans = calA.p + calA.q;
			if (calA.ans == calA.qans)
			{
				calA.score = calA.score + 5;
				cout << "恭喜你答对了,当前分数为:" << calA.score << endl;
				t_s = coti(t);
			}
			else {
				calA.score = calA.score - 3;
				cout << "很遗憾你答错了,当前分数为:" << calA.score << endl;
				t_s = coti(t);
			}
		case 1:
			cout << "减法" << endl;
			if (calA.p < calA.q)
			{
				temp = calA.q;
				calA.q = calA.p;
				calA.p = temp;
			}
			cout << calA.p << "-" << calA.q << "=";
			cin >> calA.qans;
			calA.ans = calA.p - calA.q;
			if (calA.ans == calA.qans)
			{
				calA.score = calA.score + 5;
				cout << "恭喜你答对了,当前分数为:" << calA.score << endl;
				t_s = coti(t);
			}
			else {
				calA.score = calA.score - 3;
				cout << "很遗憾你答错了,当前分数为:" << calA.score << endl;
				t_s = coti(t);
			}
		case 2:
			cout << "乘法" << endl;
			cout << calA.p << "*" << calA.q << "=";
			cin >> calA.qans;
			calA.ans = calA.p * calA.q;
			if (calA.ans == calA.qans)
			{
				calA.score = calA.score + 5;
				cout << "恭喜你答对了,当前分数为:" << calA.score << endl;
				t_s = coti(t);
			}
			else {
				calA.score = calA.score - 3;
				cout << "很遗憾你答错了,当前分数为:" << calA.score << endl;
				t_s = coti(t);
			}
		case 3:
			cout << "除法" << endl;
			if (calA.q==0)
			{
				temp = calA.q;
				calA.q = calA.p;
				calA.p = temp;
			}
			cout << calA.p << "/" << calA.q << "=";
			cin >> calA.qans;
			calA.ans = calA.p / calA.q;
			if (calA.ans == calA.qans)
			{
				calA.score = calA.score + 5;
				cout << "恭喜你答对了,当前分数为:" << calA.score << endl;
				t_s = coti(t);
			}
			else {
				calA.score = calA.score - 3;
				cout << "很遗憾你答错了,当前分数为:" << calA.score << endl;
				t_s = coti(t);
			}
		default:
			break;
		}
	} while (t_s);


    return 0;
}

/*void cal_add(cal calA)
{
	
}*/
bool coti(char t)
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

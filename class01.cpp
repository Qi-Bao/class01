#include "cal.h"
#include<stdlib.h>
#include<time.h>
#include<iostream>

using namespace std;
//void cal_add();
bool coti(char t);
bool t_s;
char t;
int s;



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
		switch (s)
		{
		case 0:
			calA.cal_add();
			t_s = coti(t);
			break;
		case 1:
			calA.cal_div();
			t_s = coti(t);
			break;
		case 2:
			calA.cal_mul();
			t_s = coti(t);
			break;
		case 3:
			calA.cal_sub();
			t_s = coti(t);
			break;
		default:
			break;
		}
	} while (t_s);


    return 0;
}
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


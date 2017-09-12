#include "cal.h"
#include<iostream>

using namespace std;


int temp;
cal::cal()
{
}


cal::~cal()
{
}

void cal :: cal_add()
{
	cout << "加法" << endl;
	cout << p << "+" << q << "=";
	cin >> qans;
	ans =  p +  q;
	if ( ans ==  qans)
	{
		 score =  score + 5;
		cout << "恭喜你答对了,当前分数为:" <<  score << endl;
		 
	}
	else {
		 score =  score - 3;
		cout << "很遗憾你答错了,当前分数为:" <<  score << endl;
		 
	}
			
}
void cal::cal_div()
{
	cout << "减法" << endl;
	if (p <  q)
	{
		temp = q;
		q = p;
		p = temp;
	}
	cout << p << "-" << q << "=";
	cin >> qans;
	ans = p - q;
	if (ans == qans)
	{
		score = score + 5;
		cout << "恭喜你答对了,当前分数为:" << score << endl;
		 
	}
	else {
		score = score - 3;
		cout << "很遗憾你答错了,当前分数为:" << score << endl;
		 
	}
}
void cal::cal_mul()
{
	cout << "乘法" << endl;
	cout <<  p << "*" <<  q << "=";
	cin >>  qans;
	 ans =  p *  q;
	if ( ans ==  qans)
	{
		 score =  score + 5;
		cout << "恭喜你答对了,当前分数为:" <<  score << endl;
		 
	}
	else {
		 score =  score - 3;
		cout << "很遗憾你答错了,当前分数为:" <<  score << endl;
		 
	}
}
void cal::cal_sub()
{
	cout << "除法" << endl;
	if ( q == 0)
	{
		temp =  q;
		 q =  p;
		 p = temp;
	}
	cout <<  p << "/" <<  q << "=";
	cin >>  qans;
	 ans =  p /  q;
	if ( ans ==  qans)
	{
		 score =  score + 5;
		cout << "恭喜你答对了,当前分数为:" <<  score << endl;
		 
	}
	else {
		 score =  score - 3;
		cout << "很遗憾你答错了,当前分数为:" <<  score << endl;
		
	}
}

#include "stdafx.h"
#include "cal.h"
#include<iostream>

using namespace std;


float temp;
cal::cal()
{
}


cal::~cal()
{
}

void cal ::cn_cal_add()
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
void cal ::cn_cal_sub()
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
void cal ::cn_cal_mul()
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
void cal ::cn_cal_div()
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
void cal ::en_cal_add()
{
	cout << "Addition" << endl;
	cout << p << "+" << q << "=";
	cin >> qans;
	ans = p + q;
	if (ans == qans)
	{
		score = score + 5;
		cout << "Congratulations on your right,score:" << score << endl;

	}
	else {
		score = score - 3;
		cout << "It's a pity,you are wrong,score:" << score << endl;

	}
}
void cal::en_cal_sub() 
{
	cout << "Subtraction" << endl;
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
		cout << "Congratulations on your right,score:" << score << endl;

	}
	else {
		score = score - 3;
		cout << "It's a pity,you are wrong,score:" << score << endl;

	}
}
void cal::en_cal_mul() {
	cout << "Multiplication" << endl;
	cout << p << "*" << q << "=";
	cin >> qans;
	ans = p *  q;
	if (ans == qans)
	{
		score = score + 5;
		cout << "Congratulations on your right,score:" << score << endl;

	}
	else {
		score = score - 3;
		cout << "It's a pity,you are wrong,score:" << score << endl;

	}
}
void cal::en_cal_div()
{
	cout << "Division" << endl;
	if (q == 0)
	{
		temp = q;
		q = p;
		p = temp;
	}
	cout << p << "/" << q << "=";
	cin >> qans;
	ans = p / q;
	if (ans == qans)
	{
		score = score + 5;
		cout << "Congratulations on your right,score:" << score << endl;

	}
	else {
		score = score - 3;
		cout << "It's a pity,you are wrong,score:" << score << endl;
	}
}
void cal::jp_cal_add() 
{
	cout << "足す" << endl;
	cout << p << "+" << q << "=";
	cin >> qans;
	ans = p + q;
	if (ans == qans)
	{
		score = score + 5;
		cout << "おめでとうございます,正解だった,点数:" << score << endl;

	}
	else {
		score = score - 3;
		cout << "残念ながら,間違った,点数:" << score << endl;

	}
}
void cal::jp_cal_sub() 
{
	cout << "引く" << endl;
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
		cout << "おめでとうございます,正解だった,点数:" << score << endl;

	}
	else {
		score = score - 3;
		cout << "残念ながら,間違った,点数:" << score << endl;
	}
}
void cal::jp_cal_mul() 
{
	cout << "挂ける" << endl;
	cout << p << "*" << q << "=";
	cin >> qans;
	ans = p *  q;
	if (ans == qans)
	{
		score = score + 5;
		cout << "おめでとうございます,正解だった,点数:" << score << endl;

	}
	else {
		score = score - 3;
		cout << "残念ながら,間違った,点数:" << score << endl;

	}
}
void cal::jp_cal_div() 
{
	cout << "割る" << endl;
	if (q == 0)
	{
		temp = q;
		q = p;
		p = temp;
	}
	cout << p << "/" << q << "=";
	cin >> qans;
	ans = p / q;
	if (ans == qans)
	{
		score = score + 5;
		cout << "おめでとうございます,正解だった,点数:" << score << endl;

	}
	else {
		score = score - 3;
		cout << "残念ながら,間違った,点数:" << score << endl;
	}
}



﻿#include <iostream>
using namespace std;

// 오늘의 주제 : 디버깅


void Test2()
{
	int b = 0;
}


void Test1()
{
	int a = 0;
	Test2();
}

int main()
{
	int num = 10;
	Test1();


	return 0;
}
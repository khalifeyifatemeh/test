// test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<conio.h>
#include<string>
#include<stdlib.h>
#include <urlmon.h>
#include<fstream>
#include <vector>
#include <iomanip>
#include <stdio.h>
using namespace std;


int main()
{

	/*std::string t = "Banana Republic";
	std::string s = "nana";

	std::string::size_type i = t.find(s);

	if (i != std::string::npos)
		t.erase(i, s.length());
	cout << t;*/
	string sz1;
	cin >> sz1;
	int r = 0;
	while (r != sz1.size())
	{
		string s = "<";
		size_t i = sz1.find(s);
		if (!sz1.find(s))
			break;
		else
			r = i;
		int k = 0;
		int j = i + 1;
		while (sz1[j] != '>')
		{
			k++;
			j++;
		}
		if (i != sz1.size() - 1)
			sz1 = sz1.erase(i, k + 2);
	}

	cout << sz1;



	_getch();
	return 0;
}


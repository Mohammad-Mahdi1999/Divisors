/// In the name of God !
//Divisors
//v1.0
#include "stdafx.h"
#include <iostream>
using namespace std;

void main()
{
	int num, i;
	cout << "Enter a number:";
	cin >> num;
	for (i = 1; i <= num; i++)
		if (num%i == 0)
			cout << i << endl;
	cin.get();
	cin.ignore();
}
//Created by /%++;; Mohammad-Mahdi Farah-bakhsh ;;++%\
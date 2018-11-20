// In the name of God !
//Divisors
//v1.5


#include "stdafx.h"
#include <iostream>
using namespace std;

void main()
{
	int num, i=1;
	cout << "Enter a number:";
	cin >> num;
	while (i <= num)
	{
		if (num%i == 0)
			cout << i << endl;
		i++;
	}
	cin.get();
	cin.ignore();
}
//Created by /%++;; Mohammad-Mahdi Farah-bakhsh ;;++%\
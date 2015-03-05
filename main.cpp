//main.cpp
#include <iostream>
#include "logbook.h"
using namespace std;

int main()
{
	Logbook coffee(2, 2001);  
	coffee.putEntry(1, 5);
	coffee.putEntry(2, 5);
	coffee.putEntry(15, 1);
	coffee.putEntry(29, 112);
	coffee.putEntry(28, 100);
	// Output the entries
	cout << "Month/Year : " << coffee.getMonth() << "/" << coffee.getYear() << endl;
	for (int day = 0 ; day < coffee.getDaysInMonth(); day++ )
		cout << day+1 << " : " << coffee.getEntry(day) << endl;
	system("pause");
	return 0;
}

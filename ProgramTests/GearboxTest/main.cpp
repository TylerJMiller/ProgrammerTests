#include <iostream>
using namespace std;


int MultiplyBy123(int value)
{
	int rslt;

	//123
	//64 32 16 8 2 1
	//6  5  4  3 1 0
	rslt = (value<<6) + (value<<5) + (value<<4) + (value<<3) + (value<<1) + value;

	return rslt;
}

void SortArray(int* a, int length)
{

}

int Main()
{
	cout << MultiplyBy123(10) << "\n";
	char input[10];

	const int length = 20;
	int a[length];


	cin >> input;
	return 0;
}


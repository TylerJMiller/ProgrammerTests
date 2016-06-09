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

void PrintArray(int* a, int length)
{
	for (int i = 0; i < length; i++)
		cout << a[i];
	cout << "\n";
}

typedef int reg;
typedef int mem;

void mov(mem &a, reg b)
{ 
	a = b;
}
void sub(reg &a, mem b) 
{ 
	a = a - b; 
}

int main()
{
	cout << MultiplyBy123(10) << "\n";
	char input[10];

	const int length = 10;
	int a[length] = {0,0,9,0,2,5,6,7,0,8};

	PrintArray(a, length);
	SortArray(a, length);
	PrintArray(a, length);
	
	reg reg1 = 23598, reg2 = -423;
	mem mem1 = -2353, mem2 = 3;

	cout << mem1 << " " << mem2 << "\n";

	mov(mem1, reg1);
	sub(reg1, mem1);
	mov(mem1, reg2);
	sub(reg2, mem1);
	sub(reg1, mem2);
	mov(mem1, reg1);
	sub(reg2, mem1);
	mov(mem1, reg2);

	cout << mem1 << " " << mem2 << "\n";



	cin >> input;
	return NULL;
}


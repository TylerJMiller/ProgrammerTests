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
	for (int i = 0; i < length; i++)
	{
		if (a[i] == 0)
		{
			for (int j = i + 1; j < length; j++)
			{
				if (a[j] != 0)
				{
					a[i] = a[j];
					a[j] = 0;
					break;
				}
			}
		}
	}
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

	//reg1 23598
	//reg2 -423
	//mem1 -2353
	//mem2 3
	mov(mem2, reg1);
	//reg1 23598
	//reg2 -423
	//mem1 -2353
	//mem2 23598
	sub(reg1, mem2);
	//reg1 0
	//reg2 -423
	//mem1 -2353
	//mem2 23598
	mov(mem2, reg2);
	//reg1 0
	//reg2 -423
	//mem1 -2353
	//mem2 -423
	sub(reg2, mem2);
	//reg1 0
	//reg2 0
	//mem1 -2353
	//mem2 -423
	sub(reg1, mem1);
	//reg1 2353
	//reg2 0
	//mem1 -2353
	//mem2 -423
	mov(mem2, reg1);
	//reg1 2353
	//reg2 0
	//mem1 -2353
	//mem2 2353
	sub(reg2, mem2);
	//reg1 2353
	//reg2 -2353
	//mem1 -2353
	//mem2 2353
	mov(mem2, reg2);
	//reg1 2353
	//reg2 -2353
	//mem1 -2353
	//mem2 -2353

	cout << mem1 << " " << mem2 << "\n";



	cin >> input;
	return NULL;
}


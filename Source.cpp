#include<iostream>
using namespace std;

void Fun1()
{
	cout << "I am Void Function\n";
}
int Fun2()
{
	cout << "I am Int dataType Function\n";
	int a=10;

	return a;
}
int main()
{
	cout << "I am calling void function\n";
	Fun1();
	cout << "I am caling Int Function\n";
	int a=Fun2();
	cout << a;
}

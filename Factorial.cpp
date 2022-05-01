#include<iostream>
using namespace std;
int main()
{
	int num;
	long content = 1;
	cout << "Enter a number : " << endl;
	cin >> num;
	for (int i = 1; i <= num; i++)
		{content *= i;
		}
	cout << "The Number's Factorial is : " << content;
}

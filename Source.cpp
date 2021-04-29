//Brandy Rohrer
//April 29, 2021
//Assignment 15b
//Write template function to perform math on varying numeric data types

#include<iostream>

using namespace std;

template <class T>
T half(T number)
{
	return number / 2;
}
int half(int number)
{
	return (round(double(number) / 2));
}
 
int main() {

	double a = 7.0;
	float b = 5.0f;
	int c = 9;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;


	system("pause");
	return 0;
}
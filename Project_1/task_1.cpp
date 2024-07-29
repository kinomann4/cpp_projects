//Write a function that accepts an array of 10 integers(between 0 and 9), that returns a string of those numbers in the form of a phone number.
//
//Example
//createPhoneNumber(int[10]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 })  => returns "(123) 456-7890"


#include <iostream>
#include <sstream>
#include <conio.h>
using namespace std;

std::string createPhoneNumber(const int arr[10]) {
	string num;
	std::ostringstream oss;
	oss << "(";
	for (int i = 0; i < 3; i++)
	{
		oss << arr[i];
	}
	oss << ") ";
	for (int i = 3; i < 6; i++)
	{
		oss << arr[i];
	}
	oss << "-";
	for (int i = 6; i < 10; i++)
	{
		oss << arr[i];
	}
	num = oss.str();
	return num;
}
int main()
{
	const int A[10] = { 0, 9, 8, 1, 2, 5, 0, 6, 5, 3 };
	cout << createPhoneNumber(A) << std::endl;
	std::cout << "Press any key to continue..." << std::endl;
    _getch();
	return 0;
}
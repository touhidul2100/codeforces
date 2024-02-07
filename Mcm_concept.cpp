// C++ program to convert Decimal to Binary Number
#include <bits/stdc++.h>
using namespace std;

int main()
{

	// input number
	int number = 6;
	int n = (int)(log2(number));

	// binary output
	// using the inbuilt function
	cout << "the binary number is : "
		<< bitset<64>(number).to_string().substr(64 - n
												- 1);
}

// This code is written by phasing17

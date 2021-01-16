#include <iostream>

using namespace std;
string conv(int decimal, int base);
int main(int argc, char** argv) {
	int number,b;
	cin >> number>>b;
	cout<<conv(number,b);
	return 0;
}

string conv(int decimal, int base){
	if(decimal == 0)
	 	return "0";
	char NUMS[] = "0123456789ABCDEF";
	string result = "";
	do{ 
		result.push_back(NUMS[decimal%base]);
	decimal /= base;
	}
	while(decimal != 0); 
	return string(result.rbegin(), result.rend());
 }

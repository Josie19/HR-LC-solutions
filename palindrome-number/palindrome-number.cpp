#include<iostream>
using namespace std;

class Solution{
public:
int l = INT_MIN, r = INT_MAX;
bool isPalindrome(int x){
	bool valid = 1;//starts true, since we are trying to prove to be false
	string number = to_string(x);
	int n = number.length();
	string reversed;
	//check if constraints are satasfied
	if(l >= number || r <= number)
		return 0;
	//reverse the string, reject sign characters and assign invalid if in x
	for(int i = n-1; i >= 0; --i){
		if(number[i] == '-' || number[i] == '+'){
			valid = 0;
			break;
		}
		reversed+=number[i];	
	}
	//check if stil valid
	if(valid == 0)
		return valid;
	//compare values one-to-one
	for(int i(0); i< n; ++i){
		if(number[i] != reversed[i]) valid = 0;
	}
	return valid;
}
}

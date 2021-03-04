#include<iostream>

using namespace std;

long substrCount(int n, string s){
	long res = 0;//the result
	int start = 0, end = 0;
	res+=n;//length one chars are considered palindromes
	for(int i(0);i<n;i++){
		//part1: odd number palindromes
		start = i-1, end = i+1;
		while((start >= 0)&& (end < n)){
			if((s[start] == s[end]) && (s[start] == s[i-1])){
				res++;
				start--;end++;
			}else break;
		}

		//part2: even number repetitions
		int k =1;
		while((s[i+k] == s[i]) && (i+k)< n) k++;//k is length of rep sequence from our i
		res+=k/2;
	}
	return res;
}

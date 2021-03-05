#include<iostream>
using namespace std;

int commonChild(string s1, string s2){
	//define sizes of each string
	int size1 = s1.length();
	int size2 = s2.length();
	//create 2d table using vectors
	vector<vector<int>> common(size1+1,vector<int>(size2+1,0));
	for(int i = 0; i< size1; i++){
		for(int j = 0; j < size2; j++){
			if(s1[i] == s2[j]) common[i+1][j+1] = 1+common[i][j];
			else common[i+1][j+1] = max(common[i+1][j],common[i][j+1]);
		}
	}
	return common[size1][size2];
}

/*constraints: 
 * s contains only As and Bs
 * s length < 10^5
 * queries < 10
 * only iterate non-empty strings greater than 1
*/
#include<iostream>
using namespace std;
/*-------alternatingCharacters-----*/
int alternatingCharacters(string s){
int i = 0, j = i+1, del = 0;
//no deletions if only single character in s
if(s.length() == 1) return del;
//iterate characters using double pointer method
while(j < s.length()){
	if(s[i] == s[j]) del++;
	i++,j++;
}
return del;
}

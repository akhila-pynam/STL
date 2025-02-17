#include <bits/stdc++.h>
using namespace std;

void explainPermutation(){
     string num = "718";
     do{
     	cout << num << endl;
     }while(next_permutation(num.begin(), num.end())); 
}

int main(){
	
	// Preprocessor Directive

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	explainPermutation();
}
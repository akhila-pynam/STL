#include <bits/stdc++.h>
using namespace std;

void explainUnorderedmap(){
    unordered_map<int, int> um;

    um.insert({1, 5});
    um.insert({2, 4});
    um.insert({3, 5});
    um.insert({4, 3});
    um.insert({5, 2});
    um.emplace(6, 5);
    um.emplace(7, 1);
    um.emplace(8, 7);
    um.emplace(9, 6);
    um.insert({10, 8});

    for(auto &p:um){
    	cout << p.first << ":" << p.second << endl;
    }
    cout << endl;

    // Erasing
    
    cout << "After Erasing" << endl;
    um.erase(1);
    for(auto &p:um){
    	cout << p.first << ":" << p.second << endl;
    }


    // Counting

    int count = um.count(7);
    cout << count << endl;


    // Finding

    if(um.find(11) != um.end()){
    	cout << "11 Found" << endl;
    }
    else{
    	cout << "11 Not Found" << endl;
    }


}

int main(){

	// Preprocessor Directive
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	explainUnorderedmap();
	return 0;
} 
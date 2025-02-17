#include <bits/stdc++.h>
using namespace std;

void explainMultiset(){
     
    multiset<int> ms;
    
    // It Takes Repeating Elements And Sorts Array In Sorted Order

    ms.insert(2);
    ms.insert(2);
    ms.emplace(3);
    ms.insert(2);
    ms.insert(4);
    ms.insert(7);
    ms.insert(1);
    ms.insert(7);
    ms.insert(6);
    ms.insert(7);

    for(int i : ms){
    	cout << i << " ";
    }
    cout << endl;

    // Erasing 

	    ms.erase(3);
	    for(int i : ms){
	    	cout << i << " ";
	    }
	    cout << endl;

	    ms.erase(2); // It Will Erase All Two's
	    for(int i : ms){
	    	cout << i << " ";
	    }
	    cout << endl;


        // To Erase At Certain Index

	    auto it = ms.find(7);
        advance(it, 1); // Moving iterator forward by 2 positions
        ms.erase(ms.find(7), it); // Correct range erase
        for(int i : ms){
        cout << i << " ";
        }
        cout << endl;
}

int main(){

	// Preprocessor Directive 

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	explainMultiset();
    return 0;
}
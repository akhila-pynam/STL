#include <bits/stdc++.h>
using namespace std;

void explainVectors(){

    // Datatype - Integer

	    vector<int> v;
	    v.push_back(2);
	    v.emplace_back(4);
	    v.push_back(2);
	    v.push_back(2);
	    v.emplace_back(4);
              
    // Output 

	    for (int i : v) {
	        cout << i << " ";
	    }
	    cout << endl;


    // Pair Datatype

	    vector<pair<int,int>> akhila = {{1, 2}, {3, 4}, {5, 6}};
	    akhila.push_back({8, 9});
	    akhila.emplace_back(1, 3); // no need for curly braces

    // Output 

	    cout << "Pair Vector: ";
	    for (const auto& p : akhila) {
	        cout << "{" << p.first << ", " << p.second << "} ";
	    }
	    cout << endl;

    // Defined Instances

	    vector <int> v3(5, 100); // Output: {100, 100, 100, 100, 100}
	    vector <int> v4(5); // Output: {0, 0, 0, 0, 0} or any garbage value

    // Output 
	    
	    for (int i : v3) {
	        cout << i << " ";
	    }
	    cout << endl;

	   
	    for (int i : v4) {
	        cout << i << " ";
	    }
	    cout << endl;

    // Copy of a Container
	    
	    vector<int> v5(5, 20); // Output: {20, 20, 20, 20, 20} 
	    vector<int> v6(v5); // Copy of v5

    // Output 
	    
	    for (int i : v5) {
	        cout << i << " ";
	    }
	    cout << endl;

	    
	    for (int i : v6) {
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

    explainVectors();
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

void explainVectors() {
    vector<int> v; 
    vector<int>::iterator it;


    int n, x;
    cin >> n; // size input
    for (int i = 0; i < n; ++i) {
        cin >> x; 
        v.push_back(x);
    }


// 1st increment later printing

    it = v.begin(); 

    while(it != v.end()) {
    	it++;
        cout << *(it) << " ";
    }
    cout << endl;


// 1st Printing later Increment

    it = v.begin(); 

    while (it != v.end()) {
        cout << *(it) << " ";
        it++;
    }
    cout << endl;


// Printing After An Index

    // it = v.begin();
	 // while(it != v.end()){
	 // 	it = it + 2;                // This Code Taken The Infinate Loop , Because! Dindn't Gave The End Distance
	 // 	cout << *(it) << " ";
	 // }
    // cout << endl;

	it = v.begin();
	    while(it != v.end()-1){
	    	it = it + 2;               
	    	cout << *(it) << " ";
	    }
	    cout << endl;
    


}

int main() {

    // Preprocessor Directive 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    explainVectors();

    return 0;
}

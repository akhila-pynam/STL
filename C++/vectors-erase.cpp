#include <bits/stdc++.h>
using namespace std;

void explainVectors() {
  
    vector<int> v;
    vector<int>::iterator it;

    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }


    // Erasing Element 1

    it = v.begin();  
    it = v.erase(it); 
    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;


    // Erasing Elment 2

    it = v.begin() + 1;
    it = v.erase(it);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
   

    // Erasing A Part Of Array

    it = v.begin();
    it = v.erase(v.begin(), v.begin()+3); // Erase elements up to, but not including, position 3
    for(int i = 0; i < v.size(); i++){
    	cout << v[i] << " ";
    }
    cout << endl;


	// Erasing All Elements 

	    v.clear();

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

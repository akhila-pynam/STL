#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>p1, pair<int,int>p2){

	if(p1.second < p2.second) return true;
	if(p1.second > p2.second) return false;
    
    if(p1.first < p2.first) return true;
    return false;

}
void explainSort(){
    
    int a[] = {5, 2, 9, 1, 5, 6};

    // Sorting

	    sort(a, a+6);

	    for (int i = 0; i < 6; i++) {
	        cout << a[i] << " ";
	    }
	    cout << endl;

	// Sorting in Descending Order

	    sort(a, a+6,greater<int>());

	    for (int i = 0; i < 6; i++) {
	        cout << a[i] << " ";
	    }
	    cout << endl;
	    

	// To Sort Only Certain Part

       int b[] = {5, 2, 9, 1, 8, 6}; 
       sort(b+3, b+6);
       
        for (int i = 0; i < 6; i++) {
	        cout << b[i] << " ";
	    }
	    cout << endl;


	// Pair Sorting

	    pair<int,int> c[] = {{2,3}, {1,4}, {3,7}};
	    sort(c, c+3, comp);
	    for (int i = 0; i < 3; i++) {
	        cout << "{" << c[i].first << "," << c[i].second << "} ";
	    }
	    cout << endl;

}
int main(){

    // Preprocessor Directive

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    explainSort();
    return 0;
}

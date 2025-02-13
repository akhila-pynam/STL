#include <bits/stdc++.h>
using namespace std;

void explainPair(){
    // Data Type - integers

    pair<int, int> p1;
    cin >> p1.first;
    cin >> p1.second;
    cout << p1.first << " " << p1.second << endl;

    // Nested Pair

    pair<int, pair<int, int>> p2;
    cin >> p2.first >> p2.second.first >> p2.second.second;
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;
    cout << p2.first << " " << p2.second.second << " " << p2.second.first << endl;


   // Pair Array

    pair<int,int> arr[] = {{1,2}, {2,3}, {3,4}, {4,5}};
    cout << arr[2].second << endl; // output = 4


  // If We Wanna Print Whole Pair Array

    int n = sizeof(arr) / sizeof(arr[0]); 
    
        for(int i = 0; i < n; ++i){
        cout << "(" << arr[i].first << ", " << arr[i].second << ")";
        if (i < n-1) cout << ", ";
        }
     cout << endl;

}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    explainPair();
    return 0;
}

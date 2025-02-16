#include <bits/stdc++.h>
using namespace std;

void explainVectors(){

    vector<int> v;
    vector<int>:: iterator it;

    int n,x;
    cin >> n;
    for(int i = 0; i < n; i++){
    	cin >> x;
    	v.push_back(x);
    }
   

   // Inserting Element At Begining

   it = v.begin();
   it = v.insert(it, 100);

   // for(int i =  0; i< v.size(); i++){
   //    cout << v[i] << " ";
   // }
   // cout << endl;

    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

  
  // Inserting 2 Elemnets After 1st Index

   it = v.begin() + 2;
   it = v.insert(it, 2, 200);

    for (int i : v) {
        cout << i << " ";
    }


   // To  Know The Size Of Array

   cout << v.size();
   cout << endl;


   // Pop Back - Eliminates Last Element

   v.pop_back();

   for (int i : v) {
        cout << i << " ";
    } 
    cout << endl;


   // Swap
   vector<int> v1 = {1,2};
   vector<int> v2 = {3,4};
   v1.swap(v2);

    for (int i : v1) {
        cout << i << " ";
    }
    cout << endl;

    for (int i : v2) {
        cout << i << " ";
    } 
    cout << endl;


    // To Print Empty Vector

    cout << v.empty();


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
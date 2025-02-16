#include <bits/stdc++.h>
using namespace std;

void explainList(){
	list<int> ls;
   
    ls.push_back(2);
    ls.push_back(3);
    ls.push_back(4);
    ls.push_back(5);
    ls.push_back(6);
    ls.emplace_back(2);
    ls.push_front(8);

   for(int i:ls){
   	cout << i << " ";
   }
   cout << endl;


   // Pair datatype 

   list<pair<int, int>> lsp = {{1, 2}, {3, 4}, {5, 6}};
    lsp.push_back({6, 7});
    lsp.emplace_back(8, 9);

    for(const auto&p : lsp) {
        cout << "{" << p.first << ", " << p.second << "} ";
    }
    cout << endl;


    // Copy Of List

    list<int> ls1(3,4);
    list<int> ls2(ls1);

    for(int i : ls1){
    	cout << i << " ";
    }
    cout << endl;

    for(int i : ls2){
    	cout << i << " ";
    }
    cout << endl;


    // Defined Instances

    list<int> ls3(3, 200);
    list<int> ls4(3);

    for(int i : ls3){
    	cout << i << " ";
    }
    cout << endl;

    for(int i : ls4){
    	cout << i << " ";
    }
    cout << endl;



}

int main(){
 //Prep
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	explainList();
    return 0;
}
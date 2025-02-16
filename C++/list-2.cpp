#include <bits/stdc++.h>
using namespace std;

void explainList(){
    
    list<int> ls;
    list<int>:: iterator it;

    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++){
    	cin >> x;
    	ls.push_back(x);
    }
    
    // Printing All Elements
	    
	    for(int i : ls){
	        cout << i << " ";
	    }
	    cout << endl;

    // Inserting An Element 

     // it = ls.begin()+3; In List We Can't Use Arthemetic Operations 

	    it = ls.begin();
	    advance(it, 3);
	    it = ls.insert(it,100);

	    for(int i : ls){
	    	cout << i << " ";       // Finally Places the 100 In 3rd Postion
	    }
	    cout << endl;

    //Inserting Elements Several Times At Particular Postion 
     
	    it = ls.begin();
	    advance(it,2);
	    it = ls.insert(it,2,200);

	    for(int i:ls){
	        cout << i << " ";
	    }
	    cout << endl; 

    // To Know The Size Of Array

        cout << ls.size();

    // Pop Back - It'll Pop Out Last Element In the Array

	    ls.pop_back();

	    for(int i:ls){
	    	cout << i << " ";
	    }
	    cout << endl;


    // Swap 

	    list<int> ls1 = {2,3};
	    list<int> ls2 = {4,5};

	    ls2.swap(ls1);

	    for(int i:ls1){
	    	cout << i << " ";
	    }
	    cout << endl; 

	    for(int i:ls2){
	    	cout << i << " ";
	    }
	    cout << endl;


	// Print Empty List

	    cout << ls.empty();

}

int main(){

    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	explainList();
}
#include <bits/stdc++.h>
using namespace std;

void explainSet(){
     
    set<int> st;
    set<int>:: iterator it;

    // s.push(10); In Set  Push Operation Is Not Used
    // It Stores In a Sorted Order - Low To High
    // No repeating Elements , It takes Only One Time

	    st.insert(10);
	    st.emplace(2);
	    st.insert(2);
	    st.insert(11);
	    st.insert(12);
	    st.insert(13);

	    for(int i:st){
	        cout << i << " ";
	    }
	    cout << endl;

   // Finding Elements Present Or Not

	    it = st.begin();
	    it = st.find(1);
	    if(it != st.end()){
	    	cout << "true" << endl;
	    }
	    else{
	    	cout << "false" << endl;
	    }

    // Erasing 

	    st.erase(12);

	    for(int i:st){
	    	cout << i << " ";
	    }
	    cout << endl;


    // Count 

	    int cnt = st.count(2);
	    cout << cnt << endl;


    // Erasing Part 
    
	    auto it1 = st.find(2);
	    auto it2 = st.find(11); // Always Shouuld Give The Preceeding Element
	    st.erase(it1, it2);

	    for(int i : st){
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

	explainSet();
	return 0;
}
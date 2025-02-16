#include <bits/stdc++.h>
using namespace std;

void explainStack(){
    stack<int> st;

    // Pushing elements onto the stack
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(2);
    st.push(6);
    st.push(9);

    // Popping Top Element - LIFO

	    st.pop();  
	    cout << st.top() << endl;

   
    // Printing Size 

	    cout << st.size() << endl;

    // Printing Remaining Elements

	    while(!st.empty()) {  
	        cout << st.top() << " "; 
	        st.pop(); 
	    }
	    cout << endl;  

	// Swap

	    stack<int> st1;
	    st1.push(1);
	    st1.push(3);
	    stack<int> st2;
	    st2.push(5);
	    st2.push(7);
	    st1.swap(st2);

	    while(!st1.empty()) {  
	        cout << st1.top() << " "; 
	        st1.pop(); 
	    }
	    cout << endl; 

	    while(!st2.empty()) {  
	        cout << st2.top() << " "; 
	        st2.pop(); 
	    }
	    cout << endl; 

}

int main(){
   // Preprocessor Directive
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    explainStack();
    return 0;
}


// Overall We Can't Use The " for Loop " In Stack Container and Also push_back, emplace_back.
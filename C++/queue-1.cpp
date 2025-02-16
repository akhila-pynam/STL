#include <bits/stdc++.h>
using namespace std;

void explainQueue(){
    queue<int> q;
    
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.emplace(6);

    // Popping - FIFO

    q.pop();
    cout << q.front() << endl;

    // Printing Size

    cout << q.size() << endl;


    // Printing Remaining Elements

    while(!q.empty()){
    	cout << q.front() << " ";
    	q.pop();
    }
    cout << endl;

// Swap
    queue<int> q1;
    q1.push(2);
    q1.push(3);
    queue<int> q2;
    q2.push(4);
    q2.push(5);

    swap(q1, q2);

    queue<int> temp = q1;
    while(!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    temp = q2;
    while(!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;


}

int main(){
    //Preprocessesor Directive 

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    explainQueue();
    return 0;
}
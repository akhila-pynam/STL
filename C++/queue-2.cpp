#include <bits/stdc++.h>
using namespace std;

void explainQueue() {

    queue<int> q;

    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        q.push(x);
    }


    // Printing All Elements

  
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    // Inserting An Element at the end
    q.push(100);

   
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;


    // Inserting Elements Several Times at the end
    q.push(200);
    q.push(200);

  
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    //Size Of Queue

    cout << q.size() << endl;

    // Pop Back 

    while(q.size() > 1) {
        q.pop();
    }
    q.pop(); // Popping the last remaining element

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    // Print Empty Queue
    cout << q.empty();
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    explainQueue();
    return 0;
}

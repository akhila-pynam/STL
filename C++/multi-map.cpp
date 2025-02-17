#include <bits/stdc++.h>
using namespace std;

void explainMultimap() {

    multimap<string, int> m;

	    m.insert({"Pig", 3});
	    m.insert({"Dog", 4});
	    m.emplace("Rat", 6);
	    m.insert({"Dog", 2});
	    m.insert({"Tiger", 7});
	    m.insert({"Lion", 7});

	    for (auto p : m) {
	        cout << p.first << ":" << p.second << endl;
	    }
	    cout << endl;

    // Erasing 

	    m.erase(m.find("Dog"));
	    for (auto p : m) {
	        cout << p.first << ":" << p.second << endl;
	    }
	    cout << endl;


    // Counting 

	    int count = m.count("Dog");
	    cout << "Dog Count : "<< count << endl;


    // Finding

        if (m.find("Tiger") != m.end()) {
	        cout << "Found Tiger" << endl;
	    } else {
	        cout << "Tiger Not Found" << endl;
	    }    
}

int main() {

    // Preprocessor Directive

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    explainMultimap();
}

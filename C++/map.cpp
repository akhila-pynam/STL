#include <bits/stdc++.h>
using namespace std;

void explainMap(){
	map<string, int> m;
	map<string, int>::iterator it;

	    m.insert({"Akhila", 7});
	    m.insert({"Saipriya", 18});
	    m.insert({"Jyosthsna", 34});
	    m.insert({"Moksha", 45});
	    m.emplace("Thanu", 5);
	    m.emplace("Lekhana", 187);
	    m.insert({"Poojitha", 18});
	    m.insert({"Prasanna", 42});
	    m.emplace("Thanmayee", 95);
	    m.emplace("Thanusha", 77);
	    m.insert({"Thanishka", 68});
	    m.insert({"Akshaya Pranathi", 8});
	    m.insert({"Bindhu", 19});
	    m.insert({"Panvika", 8});
	    m.insert({"Sai Nikhila", 8});
	    m.insert({"Sabitha", 48});
	    m.insert({"Vyshnavi", 7});
	    m.insert({"Kyathi", 1});
	    m.insert({"Binitha", 57});
	    m.insert({"Juliet", 7});
	    m.insert({"Bindhu", 18});

	    for (it = m.begin(); it != m.end(); it++) {
        cout << it->first << ": " << it->second << endl;
        }
        cout << endl;


    // Erasing

        cout << "After Erasing Akhila " << endl;
        cout << endl;

        m.erase("Akhila");

        for (auto pair : m) {
        cout << pair.first << ": " << pair.second << endl;
        }
        cout << endl;


    // Counting elements

	    int count = m.count("Sabitha");
	    cout << "Counting Sabitha: " << count << endl;
	    cout << endl;


    // Finding elements

	    if (m.find("Saipriya") != m.end()) {
	        cout << "Found Saipriya" << endl;
	    } else {
	        cout << "Saipriya Not Found" << endl;
	    }	

	    if(m.find("Dolly Parton") != m.end()){
	    	cout << "Found Dolly Parton" << endl;
	    }										
	    else{
	    	cout << "Not Found Dolly Parton" << endl;
	    }

	    if (m.find("Moksha") != m.end()) {
	        cout << "Found Moksha" << endl;
	    } else {
	        cout << "Moksha Not Found" << endl;
	    }																																						
}

int main(){

	// Preprocessor Directive

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	explainMap();
}
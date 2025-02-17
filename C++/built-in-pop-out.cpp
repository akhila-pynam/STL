#include <bits/stdc++.h>
using namespace std;
void explainBuiltInPopCount(){

	// Number

    int num = 2;
    int count = __builtin_popcount(num);

    cout << count  << endl;


    /// Long Long Number

    long long num1 = 19283744874039337;
    int count1 = __builtin_popcountll(num1);

    cout << count1  << endl;
}

int main(){
    
    // Preprossesor Directive

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    explainBuiltInPopCount();
    return 0;
}
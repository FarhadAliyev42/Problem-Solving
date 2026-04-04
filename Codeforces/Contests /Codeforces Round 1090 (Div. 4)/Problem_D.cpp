#include <iostream>
#include <vector>

// GPT Generated Solution 
// WRONG SOLUTION 

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        for (long long i = 1; i <= n; ++i) {
        cout << i * (i + 1) << (i == n ? "" : " ");
    }
    cout << endl;
    }

    return 0;
}
#include <iostream> 
#include <algorithm> 

using namespace std; 

int main(){ 
    int t; cin >> t; 
    while(t--){
        int n; cin >> n; int x = 1; int y = 3 * n; 
        for (int i = 0; i < n; i++)
        {
            cout << x << " " << y-1 << " " << y << " "; 
            x++; 
            y -= 2; 
        }
        cout << endl; 
    }

    return 0; 
}
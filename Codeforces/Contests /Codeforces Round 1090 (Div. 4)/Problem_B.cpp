#include <iostream> 
#include <algorithm>

using namespace std; 

int main(){ 
    int t; cin >> t;
    while(t--){
        int arr[7]; 
        for (int i = 0; i < 7; i++)
        {
            cin >> arr[i]; 
        } 
        sort(begin(arr), end(arr)); int n = 0; int sum = 0; 
        while(n < 6){ 
            arr[n] = -1 * arr[n]; 
            sum += arr[n]; 
            n++; 
        } 
        sum += arr[6]; 

        cout << sum << endl; 
    }

    return 0; 
}
#include <iostream> 
#include <vector> 
#include <algorithm>

// WRONG SOLUTION 

#define MAX 9999999999  
using namespace std; 

int main(){ 
    int t; cin >> t; 
    while(t--){
        int n; cin >> n; vector<long long> arr(n); 
        for(int i = 0; i < n; i++){ 
            cin >> arr[i];
        } 
        sort(arr.begin(), arr.end()); 
        for(int i = n-1; i > 0; i--){
            for (int j = i-1; j >= 0; j--){ 
                arr[j] = arr[j] ^ arr[i]; 
            } 
            arr[i] = MAX; 
            sort(arr.begin(), arr.end());  
        }
        cout << arr[0] << endl;
    }

    return 0; 
}
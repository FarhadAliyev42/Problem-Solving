#include <iostream> 
#include <cmath> 

using namespace std; 

int main(){ 

    long long n; cin >> n; 
    n = (n+1)/2; 
    long long sum = 0, cnt = 0, i = 1; 
    sum = (n/3) * (((4*(n*n)) - 1)); 
    cout << sum; 

    return 0; 
}
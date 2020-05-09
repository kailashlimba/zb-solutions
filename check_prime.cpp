#include<bits/stdc++.h>
using namespace std;


bool isPrime(int n) {
    if (n < 2) return true;
    int upperLimit = (int)(sqrt(n));
    for (int i = 2; i <= upperLimit; i++) {
        if (i < n && n % i == 0) return false;
    }
    return true;
}
signed main(){
    int n;
    cin>>n;
    cout<<isPrime(n);
}

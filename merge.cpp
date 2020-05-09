#include<bits/stdc++.h>
using namespace std;

signed main(){

    int n , m ;
    vector<int> A, B;
  multiset<int>s;
    for(int i =0;i<n;i++){
        int x ;
        cin>>x;
        A.push_back(x);
        s.insert(A[i]);
    }
        for(int i =0;i<n;i++){
        int y ;
        cin>>y;
        B.push_back(y);
        s.insert(B[i]);
    }


    A.clear();
    for(auto i : s){
        A.push_back(i);
    }

    for(int i =0;i<n;i++){
         cout<<A[i]<<" ";
    }
}

#include<bits/stdc++.h>
using namespace std;

signed main(){

    int n , m ;

    cin>>n>>m;
    vector<int> A, B;
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        A.push_back(x);
    }
    for(int i =0;i<m;i++){
        int y;
        cin>>y;
        B.push_back(y);
    }

    vector<int> res;

    int i =0,j=0;

    while(i<n && j<m){
        if(A[i]<=B[j]){
            res.push_back(A[i]);
            i++;
        }
        else{
            res.push_back(B[j]);
            j++;
        }
    }


    if(i<n){
        while(i<n){
            res.push_back(A[i]);
            i++;
        }
    }
    if(j<m){
        while(j<m){
            res.push_back(B[j]);
            j++;
        }
    }

    for(int k =0;k<res.size();k++){
        cout<<res[k]<<" ";
    }
}

#include<bits/stdc++.h>
using namespace std;

signed main(){

    int n;
    cin>>n;
    vector<int> vec;
    for(int i =0;i<n;i++){
        int x ;
        cin>>x;
        vec.push_back(x);
    }
    int cnt = 0;
    for(int i =0;i<n;i++){
        if(vec[i]!=0){
            vec[cnt] = vec[i];
            cnt++;
        }
    }
    while(cnt<n){
        vec[cnt] = 0;
        cnt++;
    }
    for(int i =0;i<n;i++){
        cout<<vec[i]<<" ";
    }


}

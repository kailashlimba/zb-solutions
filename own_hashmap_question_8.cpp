#include<bits/stdc++.h>
using namespace std ;

signed main(){

    //insert your map values

    int n ;

    cin>>n;
    unordered_map<int,int> mymap;
    for(int i =0;i<n;i++){
        int x, y;

        cin>>x>>y;
        mymap[x] = y;
    }

    //making custom map

    vector<pair<int,int> > res;

    for(auto i : mymap){
        res.push_back(make_pair(i.first,i.second));
    }

    for(int i =0;i<res.size();i++){
        cout<<res[i].first<<" "<<res[i].second;
    }


}


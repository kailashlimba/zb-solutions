#include <bits/stdc++.h>
using namespace std;



int main() {
	vector<string> words;

	int n ;
map<string, int> mymap;
	cin>>n;
	for(int i =0;i<n;i++){
        string s;
        cin>>s;

        words.push_back(s);

        if(s[s.size()-1] == ',' || s[s.size()-1] == ':' || s[s.size()-1] == '"' || s[s.size()-1] == '\'' || s[s.size()-1] == '.'){
            s= s.substr(0,s.size()-1);
        }
        if(s[0] == ',' || s[0] == ':' || s[0] == '"' || s[0] == '\'' ||  s[0] == '.'){
            s = s.substr(1,s.size()-1);
        }
        mymap[s]++;
	}
int cnt =0;
   for(auto i : mymap){

    if(i.second == 1 )cnt++;

   }

   cout<<cnt;
}

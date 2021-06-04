#include<bits/stdc++.h>
using namespace std;

vector<string> cont;

void try1(string s, int n){
    if (s.length() == n){
        cont.push_back(s);
    }
    else{
        try1(s+"0",n);
        try1(s+"1",n);
    }
}
void solve(){
	string s;
    cin>>s;
    stack<int> a;
    vector<pair<int,int> > b;
    vector<string> res;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(') a.push(i);
        else if(s[i] == ')'){
            b.push_back(make_pair(a.top(),i)); 
            a.pop();
        } 
    }
    reverse(b.begin(), b.end());
    string s1;
    vector<vector<pair<int,int> > > vect;
    try1(s1,b.size());
    for(int i = 1; i < cont.size(); i++){
        vector<pair<int,int> > tmp;
        for(int j = 0; j < cont[i].size(); j++){
            if(cont[i][j] == '1'){
                tmp.push_back(make_pair(b[j].first,b[j].second));
            }
        }
        vect.push_back(tmp);
    }
    vector<string> smth;
    for(int i = 0; i < vect.size(); i++){
        string ss="";
        for(int j = 0; j < s.size(); j++){
            int kt = 0;
            for(int k = 0; k < vect[i].size(); k++){
                if(j == vect[i][k].first || j == vect[i][k].second){
                    kt = 1;
                    break;
                }
            }
            if(kt == 0) ss+=s[j];
        }
        smth.push_back(ss);
        ss.clear();
    }
    sort( smth.begin(), smth.end() );
    smth.erase( unique( smth.begin(), smth.end() ), smth.end() );
    for(int i = 0; i < smth.size(); i++) cout<<smth[i]<<endl;
}
int main(){
		solve();
}
// NV Than




#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    stack<int> st;
    for (int i = 0; i <= s.size(); i++){
        if (s[i] == 'I' || i == s.size()){
            cout << i + 1;
            while (!st.empty()) {
                cout << st.top(); 
                st.pop();
            }
        }
        else if (s[i] == 'D') st.push(i + 1);
    }
    cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than




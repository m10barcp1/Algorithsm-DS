#include<bits/stdc++.h>
using namespace std;

void solve(){
	 	int s,d;
        cin >> s >> d;
        stack <int> st;
        if(s > d*9) cout<<"-1";
        else{
            while(s>0){
                int x = 0;
                if( d == 1){
                    st.push(d);
                    break;
                }
                while( x < 9 && s>1){
                    x++;
                    s--;
                }
                st.push(x);
                d--;
                if(s == 1 && d != 1){
                    while(d!=1){
                        st.push(0);
                        d--;
                    }
                    st.push(1);
                    break;
                }
                else if(s == 1 && d == 1){
                    st.push(1);
                    break;
                }
            }
            while(st.size()!=0){
                cout<<st.top();
                st.pop();
            }
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




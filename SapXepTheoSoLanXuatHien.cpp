#include<bits/stdc++.h>
using namespace std;
int check[100005];
bool be(int a,int b)
{
	return check[a]>check[b];
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n, x;
		
		vector<int>a;
		cin>>n;
		for(int i=0;i<100005;i++ )check[i] = 0;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
			check[x]++;
		}
		sort(a.begin(),a.end());
	   	stable_sort(a.begin(),a.end(),be);
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
	    cout<<endl;
	}
	return 0;
}

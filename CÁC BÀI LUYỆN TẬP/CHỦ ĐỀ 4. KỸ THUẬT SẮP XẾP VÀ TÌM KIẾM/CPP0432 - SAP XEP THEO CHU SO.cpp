#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
	return a + b > b + a;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		vector <string> v(n);
		for(int i = 0;i < n; i++) cin >> v[i];
		sort(v.begin(), v.end(), cmp);
		for(int i = 0;i < n; i++) cout<<v[i];
		cout<<endl;
	}
}

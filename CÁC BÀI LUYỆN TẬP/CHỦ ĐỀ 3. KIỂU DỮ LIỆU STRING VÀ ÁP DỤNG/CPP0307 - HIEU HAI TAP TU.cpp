#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string c1, c2;
		getline(cin, c1);
		getline(cin, c2);
		stringstream ss1(c1), ss2(c2);
		string token1, token2;
		set<string>s1, s2;
		while(ss1 >> token1) s1.insert(token1);
		while(ss2 >> token2) s2.insert(token2);
		for(string x:s1){
			if(s2.find(x) == s2.end()) cout<<x<<" ";
		}
		cout<<endl;
	}
}

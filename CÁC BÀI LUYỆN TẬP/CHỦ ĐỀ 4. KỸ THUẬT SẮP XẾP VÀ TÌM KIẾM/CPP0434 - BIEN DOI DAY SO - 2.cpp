#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		long long b[n];
		b[0]=a[0]*a[1];
		b[n-1]=a[n-2]*a[n-1];
		for(int i=1;i<=n-2;i++){
			b[i]=a[i-1]*a[i+1];
		}
		for(int i=0;i<n;i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n, k;
		cin>>n>>k;
		long long a[n];
		for(long long i=0;i<n;i++){
			cin>>a[i];
		}
		long long sum=0;
		long long l=0, r, ans=1e9;
		for(long long r=0;r<n;r++){
			sum+=a[r];
			while(sum>k){
				ans=min(ans,r-l+1);
				sum-=a[l];
				l++;
			}
		}
		if(ans==1e9){
			cout<<-1<<endl;
		} else {
			cout<<ans<<endl;
		}
	}
}
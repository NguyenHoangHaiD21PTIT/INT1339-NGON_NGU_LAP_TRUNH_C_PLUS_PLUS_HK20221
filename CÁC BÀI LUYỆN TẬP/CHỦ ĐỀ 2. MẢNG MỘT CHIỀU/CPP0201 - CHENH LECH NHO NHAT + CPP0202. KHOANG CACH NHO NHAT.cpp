#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		int gtnn = 1e9;
		for (int i = 1; i < n; i++) gtnn = min(gtnn, a[i] - a[i - 1]);
		cout << gtnn << endl;
	}
}
                  
 

#include<bits/stdc++.h>
using namespace std;
void solve(int s, int m){//Tong chu so = s, so co m chu so
	int tmp = s;
	if(s > 9 *m || (s == 0 && m > 2)) cout << "-1 -1";
	else {
		vector<int> a(m), b(m);
		for(int i = 0; i < m; i++){
			if(s >= 9) {
				a[i] = 9; s -= 9;
			} else {
				a[i] = s; s = 0;
			} 
		}
		tmp--;
		for(int i = m - 1; i > 0; i--){
			if(tmp >= 9){
				b[i] = 9; tmp -= 9;
			} else {
				b[i] = tmp; tmp = 0;
			}
		}
		b[0] = tmp + 1;
		for(int x : b) cout << x;
		cout << " ";
		for(int x : a) cout << x;
	}
}
 
int main(){
	int s,m; cin >> m >> s;
	solve(s, m);
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
	    string c;
	    cin>>c;
	    c=c+"a";
	    int so=0;//Dung de chuyen cum xau gom cac so thanh so
	    int gtln=-1e9;//dung de tim so lon nhat trong xau
	    for(int i=0;i<c.size();i++){
	    	if(isdigit(c[i])){
	    		so=so*10+(c[i]-'0');
	    	} else {
	    		gtln=std::max(gtln,so);//Da den chu so cuoi cung cua so do
	    		so=0;//reset lai de tinh tiep
	    	}
	    }
	    //Vi khi nao ki tu khong la so thi moi ghi nhan so cuoi cung, do do ki tu cuoi la so thi so cuoi chua duoc ghi nhan
	    cout<<gtln<<endl;
	}
}

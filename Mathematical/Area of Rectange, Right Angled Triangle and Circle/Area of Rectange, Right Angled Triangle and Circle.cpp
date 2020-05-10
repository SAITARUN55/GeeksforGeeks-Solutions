#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int l,b,base,p,r,arec,arat,acir;
	    cin>>l>>b>>base>>p>>r;
	    arec=l*b;
	    cout<<arec<<" ";
	    arat=(base*p)/2;
	    cout<<arat<<" ";
	    acir=3.14*r*r;
	    cout<<acir<<" ";
	    cout<<"\n";
	}
	return 0;
}

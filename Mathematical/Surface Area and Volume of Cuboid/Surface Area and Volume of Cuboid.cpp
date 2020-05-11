#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int l,b,h,tsa,vol;
	    cin>>l>>b>>h;
	    tsa=2*(l*b+b*h+h*l);
	    vol=l*b*h;
	    cout<<tsa<<" "<<vol<<"\n";
	}
	return 0;
}

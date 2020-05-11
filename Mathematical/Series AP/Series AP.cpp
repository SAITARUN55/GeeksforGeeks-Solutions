#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,n,d,tn;
	    cin>>a>>b>>n;
	    d=b-a;
	    tn=a+(n-1)*d;
	    cout<<tn<<"\n";
	}
	return 0;
}

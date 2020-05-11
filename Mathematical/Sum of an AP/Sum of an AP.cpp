#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,a,d,sum;
	    cin>>n>>a>>d;
	    sum=(n*((2*a)+(n-1)*d))/2;
	    cout<<sum<<"\n";
	}
	return 0;
}

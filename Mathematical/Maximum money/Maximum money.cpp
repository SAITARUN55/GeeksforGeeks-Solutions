#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m,rob;
	    cin>>n>>m;
	    if(n%2==0){
	        rob=(n/2)*m;
	    }
	    else{
	        rob=(n/2)*m+m;
	    }
	    cout<<rob<<"\n";
	}
	return 0;
}

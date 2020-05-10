#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t,cube;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cube=pow(n,1.0/3.0);
	    cout<<cube<<"\n";
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,m,count=0;
	    cin>>a>>b>>m;
	    for(int i=a;i<=b;i++){
	        if(i%m==0){
	            count++;
	        }
	    }
	    cout<<count<<"\n";
	}
	return 0;
}

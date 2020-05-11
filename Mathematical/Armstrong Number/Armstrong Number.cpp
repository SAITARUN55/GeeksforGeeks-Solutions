#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,result,temp,rem;
	    cin>>n;
	    temp=n;
	    while(temp!=0){
	        rem=temp%10;
	        result +=rem*rem*rem;
	        temp=temp/10;
	    }
	    if(result==n){
	        cout<<"Yes"<<"\n";
	    }
	    else{
	        cout<<"No"<<"\n";
	    }
	    }
	return 0;
}

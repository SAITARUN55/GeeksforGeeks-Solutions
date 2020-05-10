#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,table;
        cin>>n;
        for (int i=1;i<=10;i++){
            table=n*i;
            cout<<table<<" ";
        }
        cout<<"\n";
    }
	return 0;
}

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n], c[10001]={0};
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            c[arr[i]]++;
        }
        for(int i=0;i<10001;i++){
            if(c[i]==1){
                cout<<i<<endl;
            }
        }
    }
	return 0;
}

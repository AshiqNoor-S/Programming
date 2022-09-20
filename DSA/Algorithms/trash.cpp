#include <iostream>
using namespace std;

int main() {
	int t,n,m;
	cin>>t;
	for(int i=0;i<t;i++){
	    int s=0;
	    cin>>n;
	    cin>>m;
	    int arr[n];
	    int arr1[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]<=(m/2)){
	            arr1[i]=m;
	        }else{
	            arr1[i]=1;
	        }
	    }
	    
	    for(int i=0;i<n;i++){
	        s+=abs((arr[i]-arr1[i]));
	    }
	    if(i==t-1){
	        cout<<s;
	    }else{
	    cout<<s<<endl;
	    }
	}
}
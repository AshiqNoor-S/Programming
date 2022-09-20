// Chef has an array AA of size NN and an integer MM, such that 1 \leq A_i \leq M1≤A 
// i
// ​
//  ≤M for every 1 \leq i \leq N1≤i≤N.

// The distance of an array BB from array AA is defined as:

// d(A, B) = \sum_{i=1}^N |A_i - B_i|
// d(A,B)= 
// i=1
// ∑
// N
// ​
//  ∣A 
// i
// ​
//  −B 
// i
// ​
//  ∣
// Chef wants an array BB of size NN, such that 1 \le B_i \le M1≤B 
// i
// ​
//  ≤M and the value d(A, B)d(A,B) is as large as possible, i.e, the distance of BB from AA is maximum.

// Find the maximum distance for any valid array BB.

// Note: |X|∣X∣ denotes the absolute value of an integer XX. For example, |-4| = 4∣−4∣=4 and |7| = 7∣7∣=7.

#include <iostream>
using namespace std;

int main() {
	long t,n,m;
	cin>>t;
	for(int i=0;i<t;i++){
	    long s=0;
	    cin>>n;
	    cin>>m;
	    long arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        s+=max(arr[i]-1, m-arr[i]);
	    }
	 cout<<s<<endl;  
	}
}

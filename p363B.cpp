#include <bits/stdc++.h>
using namespace std;

int main(){
	int i,j,k,l,n,m,t;
	cin>>n>>k;

	int arr[n+3];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}

	int minHeight = 0, sum = 0, ans = 0;
	for(i=0;i<k;i++){
		sum += arr[i];
	}

	minHeight = sum;
	for(i=k;i<n;i++){
		sum = sum - arr[i-k] + arr[i];
		if(sum < minHeight){
			minHeight = sum;
			ans = i-k+1;
		}
	}
	cout<<(ans+1)<<endl;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
	int i,j,k,l,n,m,t;
	cin>>n;
	int arr[n+2];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	int maxLen = 0;
	for(i=0;i<n;){
		j = i+1;
		while(j < n && arr[j-1] <= arr[j]){
			j++;
		}
		maxLen = max(maxLen, (j-i));
		i = j;
	}
	maxLen = max(maxLen, (j-i));
	printf("%d\n",maxLen);
}
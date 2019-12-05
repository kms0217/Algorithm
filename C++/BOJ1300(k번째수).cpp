#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int n,k,ret;
	cin>>n>>k; 
	int left=0,right=k;
	while(left<=right){
		int count=0,mid=(left+right)/2;
		for(int i=1;i<=n;i++)
			count+=min(mid/i,n);
		if(count<k)left=mid+1;
		else {
			right=mid-1;
			ret=mid;
		}
	}
	cout<<ret;
}

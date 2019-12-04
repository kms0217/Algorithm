#include<iostream>
#include<vector>
#include<algorithm>
#define LL long long
using namespace std;

int main(){
	LL n,m,Max=0;
	cin>>n>>m;
	vector<LL> tree(n);
	for(int i=0;i<n;i++){
		cin>>tree[i];
		Max=max(tree[i],Max);
	}
	LL left=0,right=Max-1,mid=(left+right)/2;
	while(left<=right){
		LL sum=0;
		for(int i=0;i<n;i++){
			if(tree[i]>mid)	
				sum+=tree[i]-mid;
		}
		if(sum>=m)
			left=mid+1;
		else
			right=mid-1;
		mid=(right+left)/2;
	}
	cout<<mid;
}

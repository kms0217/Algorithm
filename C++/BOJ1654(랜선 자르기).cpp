#include<iostream>
#include<algorithm>
#include<vector>
#define ULL long long int
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,k;
	ULL Max=0;
	cin>>n>>k;
	vector<ULL> vec(n);
	for(int i=0;i<n;i++){
		cin>>vec[i];
		Max=max(Max,vec[i]);
	}
	ULL left=1,right=Max,mid=(right+left)/2;
	while(left<=right){
		ULL ret=0;
		for(int i=0;i<n;i++)
			ret+=vec[i]/mid;
		if(ret<k)
			right=mid-1;
		else
			left=mid+1;
		mid=(right+left)/2;

	}
	cout<<mid;
}



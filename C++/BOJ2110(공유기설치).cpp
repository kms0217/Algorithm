#include<iostream>
#include<vector>
#include<algorithm>
#define LL long long
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,c;
	LL ret=0;
	cin>>n>>c;
	vector<LL> vec(n);
	for(int i=0;i<n;i++)
		cin>>vec[i];
	sort(vec.begin(),vec.end());
	LL left=1,right=vec[n-1]-vec[0],mid=(left+right)/2;
	while(left<=right){
		int cnt=1;
		int pre=vec[0];
		for(int i=1;i<n;i++){
			if(vec[i]-pre>=mid){
				cnt++;
				pre=vec[i];
			}
		}
		if(cnt>=c){
			ret=mid;
			left=mid+1;
		}
		else right=mid-1;
		mid=(left+right)/2;
	}
	cout<<ret;
}

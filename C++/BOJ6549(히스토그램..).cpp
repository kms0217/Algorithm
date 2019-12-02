#include<iostream>
#include<algorithm>

using namespace std;

int his[100000];


long long sol(int left,int right){
	if(left==right) return his[left];
	int mid=(left+right)/2;
	long long ret=max(sol(left,mid),sol(mid+1,right));
	int lo=mid,hi=mid+1;
	int h=min(his[lo],his[hi]);
	ret=max(ret,(long long)h*2);
	while(left<lo||hi<right){
		if(hi<right&&(lo==left||his[lo-1]<his[hi+1])){
			hi++;
			h=min(h,his[hi]);
		}
		else{
			lo--;
			h=min(h,his[lo]);
		}
		ret=max(ret,(long long)h*(hi-lo+1));
	}
	return ret;
}

int main(){
	int n;
	cin>>n;
	while(n){
		for(int i=0;i<n;i++)
			cin>>his[i];		
		cout<<sol(0,n-1)<<'\n';			
		for(int i=0;i<n;i++)
			his[i]=0;
		cin>>n;
	}
}

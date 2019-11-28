#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n,a,minnum=999999999,maxnum=-999999999;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		minnum=min(minnum,a);
		maxnum=max(maxnum,a);
	}
	cout<<maxnum*minnum;
}

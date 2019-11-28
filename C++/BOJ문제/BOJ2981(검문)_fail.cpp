#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n,Max=0;
	vector<int> vec;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		Max=max(Max,a);
		vec.push_back(a);
	}
	for(int i=2;i<=Max;i++){
		int r=vec[0]%i;
		for(int j=1;j<n;j++){
			if(r==vec[j]%i){
				if(j==n-1)cout<<i<<" ";
				continue;
			}
			else break;
		}
	}
}

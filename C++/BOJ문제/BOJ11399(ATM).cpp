#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n,result=0;
	vector<int> vec;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		vec.push_back(a);
	}
	sort(vec.begin(),vec.end());
	for(int i=0;i<n;i++){
		for(int j=i;j>=0;j--){
			result+=vec[j];
		}
	}
	cout<<result;
}

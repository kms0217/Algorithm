#include<iostream>
#include<vector>
#include<algorithm>
#define abs(a) (a>0? a:(-a))
using namespace std;

int gcd(int a,int b){
	if(a%b==0)return b;
	return gcd(b,a%b);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	vector<int> vec(n);
	for(int i=0;i<n;i++)
		cin>>vec[i];
	sort(vec.begin(),vec.end());
	int com=vec[1]-vec[0];
	for(int i=2;i<n;i++){
		com=gcd(com,vec[i]-vec[i-1]);
	}
	vector<int> result;
	result.push_back(com);
	for(int i=2;i*i<=com;i++){
		if(com%i==0){
			result.push_back(i);
			result.push_back(com/i);
		}
	}
	sort(result.begin(),result.end());
	result.erase(unique(result.begin(),result.end()),result.end());
	for(int i=0;i<result.size();i++)
		cout<<result[i]<<" ";
}

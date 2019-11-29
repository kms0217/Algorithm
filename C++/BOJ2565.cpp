#include<iostream>
#include<vector>
#include<algorithm>
#define mmax(x,y) (x>y? x:y)
using namespace std;

int main(){
	int N;
	vector<pair<int,int> > vec;
	cin>>N;
	vector<int> mem(N,1);
	for(int  i=0;i<N;i++){
		int a,b;
		cin>>a>>b;
		vec.push_back({a,b});
	}
	sort(vec.begin(),vec.end());
	for(int i=1;i<N;i++){
		int Max=0;
		for(int j=0;j<i;j++){
			if(vec[i].second>vec[j].second)
				Max=mmax(mem[j],Max);
		}
		mem[i]=Max+1;
	}
	int result=0;
	for(int i=0;i<N;i++)
		result=mmax(result,mem[i]);
		
	cout<<N-result;
}

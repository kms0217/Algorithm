#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool comp(pair<int,int> a , pair<int,int> b){
	if(a.second==b.second)
		return a.first<b.first;
	return a.second<b.second;
}

int main(){
	int n,result=0;
	vector<pair<int,int> > vec;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		vec.push_back(make_pair(a,b));
	}
	sort(vec.begin(),vec.end(),comp);
	
	int pre=0;
	for(int i=0;i<n;i++){
		if(pre<=vec[i].first){
			pre=vec[i].second;
			result++;
		}
	}
	cout<<result;
}

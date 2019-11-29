#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool comp(pair<int,int> a,pair<int,int>b){
	if(a.first==b.first)
		return a.second<b.second;
	return a.first<b.first;
}

int main(){
	ios_base::sync_with_stdio(false);
	vector<pair<int,int> > vec;
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		int x,y;
		cin>>x>>y;
		vec.push_back(make_pair(x,y));
	}
	sort(vec.begin(),vec.end(),comp);
	for(int i=0;i<N;i++){
		cout<<vec[i].first<<" "<<vec[i].second<<'\n';
	}
}

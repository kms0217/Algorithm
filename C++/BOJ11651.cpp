#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool comp(pair<int,int> a, pair<int,int> b){
	if(a.second==b.second)
		return a.first<b.first;
	return a.second<b.second;
}

int main(){
	ios_base::sync_with_stdio(false);
	vector<pair<int,int> > vec;
	int n;
	cin>>n;
	while(n--){
		int x,y;
		cin>>x>>y;
		vec.push_back(make_pair(x,y));
	}
	sort(vec.begin(),vec.end(),comp);
	for(int i=0;i<vec.size();i++)
		cout<<vec[i].first<<" "<<vec[i].second<<'\n';
}

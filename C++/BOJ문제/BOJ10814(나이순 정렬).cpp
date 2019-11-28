#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

bool comp(pair<string,pair<int,int> > a, pair<string,pair<int,int> > b){
	if(a.second.first==b.second.first)
		return a.second.second<b.second.second;
	return a.second.first<b.second.first;
}

int main(){
	int n;
	ios_base::sync_with_stdio(false);
	vector<pair<string,pair<int,int> > > vec;
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		int a;
		cin>>a>>s;
		vec.push_back(make_pair(s,make_pair(a,i)));
	}
	sort(vec.begin(),vec.end(),comp);
	for(int i=0;i<n;i++)
		cout<<vec[i].second.first<<" "<<vec[i].first<<'\n';
}

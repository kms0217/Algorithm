#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comp(string a,string b){
	if(a.size()==b.size())
		return a<b;
	return a.size()<b.size();
}

int main(){
	int n;
	vector<string> vec;
	cin>>n;
	for(int i=0;i<n;i++){
		string a;
		cin>>a;
		vec.push_back(a);
	}
	sort(vec.begin(),vec.end(),comp);
	vec.erase(unique(vec.begin(),vec.end()),vec.end());
	for(int i=0;i<vec.size();i++)
		cout<<vec[i]<<endl;
	
}

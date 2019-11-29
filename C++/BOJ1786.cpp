#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<int> result;

vector<int> findP(string f){
	vector<int> P(f.size(),0);
	int j=0;
	for(int i=1;i<f.size();i++){
		while(j>0&&f[i]!=f[j])j=P[j-1];
		if(f[i]==f[j])P[i]=++j;
	}
	return P;
}

void KMP(string s,string f){
	vector<int> P=findP(f);
	int j=0;
	for(int i=0;i<s.size();i++){
		while(j>0&&s[i]!=f[j])j=P[j-1];
		if(s[i]==f[j]){
			if(j==f.size()-1){
				result.push_back(i-j+1);
				j=P[j];
			}
			else j++;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	string s;
	string f;
	vector<int> P;
	getline(cin,s);
	getline(cin,f);	
	KMP(s,f);
	cout<<result.size()<<'\n';
	for(int i=0;i<result.size();i++)
		cout<<result[i]<<'\n';
}

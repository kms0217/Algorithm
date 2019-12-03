#include<iostream>
#include<set>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,m,num;
	cin>>n;
	set<int> s;
	for(int i=0;i<n;i++){
		int tmp;
		cin>>tmp;
		s.insert(tmp);
	}
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>num;
		if(s.find(num)!=s.end())
			cout<<"1\n";
		else
			cout<<"0\n";
	}
}

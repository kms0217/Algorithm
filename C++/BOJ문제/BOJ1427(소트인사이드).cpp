#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool comp(char a,char b){
	return a>b;
}

int main(){
	string a;
	cin>>a;
	sort(a.begin(),a.end(),comp);
	cout<<a;
}

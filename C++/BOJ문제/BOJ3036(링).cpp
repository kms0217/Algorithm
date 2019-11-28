#include<iostream>
using namespace std;

int gcd(int a, int b){
	if(b==0)return a;
	return gcd(b,a%b);
}

int main(){
	int n,base;
	cin>>n;
	cin>>base;
	for(int i=0;i<n;i++){
		int tmp,g;
		cin>>tmp;
		if(tmp<base)g=gcd(base,tmp);
		else g=gcd(tmp,base);
		cout<<base/g<<"/"<<tmp/g<<endl;
	}
	
}

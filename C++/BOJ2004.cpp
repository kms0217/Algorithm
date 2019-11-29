#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

long long F(int n){
	long long ret=0;
	for(long long i=5;n/i>0;i*=5)
		ret+=n/i;
	return ret;
}
long long T(int n){
	long long ret=0;
	for(long long i=2;n/i>0;i*=2)
		ret+=n/i;
	return ret;
}
int main(){
	long long n,m;
	cin>>n>>m;	
	cout<<min(F(n)-F(m)-F(n-m),T(n)-T(m)-T(n-m));
}

#include<iostream>

using namespace std;

int Fac(int num){
	if(num==1||num==0)
		return 1;
	else
		return Fac(num-1)*num;
}

int main(){
	int n,k;
	cin>>n>>k;
	cout<<Fac(n)/(Fac(k)*Fac(n-k));
}

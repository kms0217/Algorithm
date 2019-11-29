#include<iostream>

using namespace std;

int main(){
	int num,r=2;
	cin>>num;
	while(num>1){
		while(num%r==0){
			cout<<r<<"\n";
			num/=r;
		}
		r++;
	}
}

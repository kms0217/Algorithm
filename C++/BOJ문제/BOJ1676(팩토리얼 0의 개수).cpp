#include<iostream>

using namespace std;

int main(){
	int n,result=0;
	cin>>n;
	while(n>0){
		int temp=n;
		while(temp%5==0){
			result++;
			temp/=5;
		}
		n--;
	}
	cout<<result;
}

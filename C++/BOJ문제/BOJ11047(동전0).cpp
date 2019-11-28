#include<iostream>

using namespace std;

int main(){
	int n,k,result=0;
	int money[10];
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>money[i];
	for(int i=n-1;i>=0;i--){
		while(k-money[i]>=0){
			result++;
			k-=money[i];
		}
	}	
	cout<<result;
}

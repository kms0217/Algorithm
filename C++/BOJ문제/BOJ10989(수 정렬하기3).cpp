#include<iostream>

using namespace std;

int count[10001]={0,};

int main(){
	ios_base::sync_with_stdio(false);
	int N,num;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>num;
		count[num]++;
	}
	for(int i=1;i<=10000;i++){
		if(!count[i])continue;
		for(int j=0;j<count[i];j++){
			cout<<i<<'\n';
		}
	}
	
}

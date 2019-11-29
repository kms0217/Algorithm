#include<iostream>

using namespace std;

int f[1000001]={0,};

int main(){
	ios_base::sync_with_stdio(false);  
	int M,N;
	cin>>M>>N;	
	for(int i=2;i<=N;i++){
		f[i]=i;
	}
	for(int i=2;i<=N;i++){
		if(!f[i])continue;
		for(int j=i+i;j<=N;j+=i){
			f[j]=0;
		}
	}
	for(int i=M;i<=N;i++){		
		if(!f[i])continue;
		cout<<f[i]<<'\n';
	}
}

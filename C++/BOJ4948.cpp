#include<iostream> 

using namespace std;

int num[300000]={0,};

void func(int N){
	for(int i=2;i<=2*N;i++){
		num[i]=i;
	}
	for(int i=2;i<=2*N;i++){
		if(!num[i])continue;
		for(int j=i+i;j<=2*N;j+=i){
			num[j]=0;
		}
	}
	int count=0;
	for(int i=N+1;i<=2*N;i++){
		if(num[i])count++;
	}
	
	cout<<count<<'\n';
}

int main(){
	int N;
	cin>>N;
	while(N){
		func(N);
		cin>>N;
	}
}

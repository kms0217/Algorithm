#include<iostream>

using namespace std;

int f[10001]={0,};

int main(){
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
	int min=10001;
	int sum=0;
	
	for(int i=M;i<=N;i++){		
		if(!f[i])continue;
		if(f[i]<min)min=f[i];
		sum+=f[i];
	}
	if(!sum)cout<<-1;
	else{
		cout<<sum<<endl<<min;
	}
	
}

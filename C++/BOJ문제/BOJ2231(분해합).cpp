#include<iostream>

using namespace std;

int part(int a){
	int x=1000000;
	int sum=0;
	while(x!=1){
		sum+=a/x;
		a%=x;
		x/=10;
	}
	return sum+a;
}

int main(){
	int N;
	cin>>N;
	for(int i=1;i<1000001;i++){
		int partsum=i+part(i);
		if(partsum==N){
			cout<<i;
			return 0;
		}
	}
	cout<<0;
	
}

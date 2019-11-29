#include<iostream>

using namespace std;

int map[10001];


int main(){
	int n;
	cin>>n;
	for(int i=2;i<10001;i++)
		map[i]=i;
	for(int i=2;i<10001;i++){
		if(!map[i])continue;
		for(int j=i+i;j<10001;j+=i)
			map[j]=0;
	}
	while(n--){
		int A,B,C,D;
		cin>>A;
		B=A/2;
		for(int i=0;i<=B-2;i++){
			C=B-i;
			D=B+i;
			if(map[C]&&map[D]){
				cout<<C<<" "<<D<<'\n';
				break;
			}
		}
		
		
	}
}

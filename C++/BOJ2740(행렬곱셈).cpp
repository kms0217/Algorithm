#include<iostream>

using namespace std;
int A[100][100],B[100][100],C[100][100]={0,};
int main(){
	int N,M,K;
	cin>>N>>M;
	for(int i=0;i<N;i++)
		for(int j=0;j<M;j++)
			cin>>A[i][j];
	cin>>M>>K;
	for(int i=0;i<M;i++)
		for(int j=0;j<K;j++)
			cin>>B[i][j];
			
				
	for(int i=0;i<N;i++){
		for(int k=0;k<K;k++)
		for(int j=0;j<M;j++){
			C[i][k]+=A[i][j]*B[j][k];
		}
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<K;j++)
			cout<<C[i][j]<<" ";
		cout<<"\n";
	}
		
}

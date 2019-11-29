#include<iostream>
#define mmax(x,y) (x>y ? x:y)
using namespace std;

int mem [1000][2];
int num[1000];
int main(){
	int N;
	cin>>N;
	for(int i=0;i<N;i++)
		cin>>num[i];
	mem[N-1][1]=1;
	mem[0][0]=1;
	for(int i=1;i<N;i++){
		int Max=0;
		for(int j=0;j<i;j++){
			if(num[i]>num[j]){
				Max=mmax(mem[j][0],Max);
			}
		}
		mem[i][0]=Max+1;
	}	
	
	for(int i=N-2;i>=0;i--){
		int Max=0;
		for(int j=N-1;j>i;j--){
			if(num[i]>num[j]){
				Max=mmax(mem[j][1],Max);
			}
		}
		mem[i][1]=Max+1;
	}
	int result=0;
	for(int i=0;i<N;i++){
		result=mmax(result,mem[i][0]+mem[i][1]);
	}
	cout<<result-1;
}

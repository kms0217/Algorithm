#include<iostream>
#include<string>
#define mmax(x,y) (x>y ? x:y)
using namespace std;
int mem[1100][1100];

int main(){
	string a,b;
	cin>>a>>b;
	
	for(int i=0;i<=a.size();i++){
		mem[0][i]=0;
	}		
	for(int i=0;i<=b.size();i++){
		mem[i][0]=0;
	}
	for(int i=1;i<=b.size();i++){
		for(int j=1;j<=a.size();j++){
			if(b[i-1]==a[j-1])
				mem[i][j]=mem[i-1][j-1]+1;
			else
				mem[i][j]=mmax(mem[i-1][j],mem[i][j-1]);
		}
	}
	cout<<mem[b.size()][a.size()];
}

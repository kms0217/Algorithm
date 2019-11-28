#include<iostream>

using namespace std;

int main(){
	int a[3];
	cin>>a[0]>>a[1]>>a[2];
	while(a[0]||a[1]||a[2]){
		int max=0;
		int maxindex=0;
		for(int i=0;i<3;i++)	
			if(max<a[i]){
				max=a[i];
				maxindex=i;
			}
		int A=0,B;
		for(int i=0;i<3;i++)	{
			if(i==maxindex){
				B=a[i]*a[i];
				continue;
			}
			A+=a[i]*a[i];
		}
		if(A==B)cout<<"right"<<endl;
		else cout<<"wrong"<<endl;
			
	cin>>a[0]>>a[1]>>a[2];
	}
}

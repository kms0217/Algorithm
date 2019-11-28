#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int jx,jy,bx,by,jr,br,N;
	cin>>N;
	while(N--){
		cin>>jx>>jy>>jr>>bx>>by>>br;
		int dist=pow(bx-jx,2)+pow(by-jy,2);
		int com_1=pow(jr+br,2);
		int com_2=pow(jr-br,2);
		if(dist==0&&br==jr)
			cout<<-1<<endl;
		else if(dist<com_1&&dist>com_2)
			cout<<2<<endl;
		else if(com_1==dist||com_2==dist)
			cout<<1<<endl;
		else cout<<0<<endl;
	}	
}

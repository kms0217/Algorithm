#include<iostream> 
#include<vector>
using namespace std;
int N,result[3]={0,};
vector<vector<int> > vec;

void solv(int size,int n,int m){
	int comp=vec[n][m];
	bool flag=false;
	for(int i=n;i<n+size ;i++){
		for(int j=m;j<m+size ;j++){
			if(vec[i][j]!=comp){
				flag=true;
				break;
			}
		}
		if(flag)break;
	}
	if(!flag){
		result[comp+1]++;
		return;
	}
	size/=3;
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			solv(size,n+i*size,m+j*size);

}

int main(){
	cin>>N;
	for(int i=0;i<N;i++){
		vector<int> temp;
		for(int j=0;j<N;j++){
			int a;
			cin>>a;
			temp.push_back(a);
		}
		vec.push_back(temp);
	}	
	solv(N,0,0);	
	for(int i=0;i<3;i++)
		cout<<result[i]<<endl;
}

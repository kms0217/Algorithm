#include<iostream>
#include<algorithm>
using namespace std;

int tree[100001];     //0이면 비어있는 
int size=0;

void insert(int num){
	tree[++size]=num;
	int child=size,parent=child/2;
	while(parent>=1&&tree[child]>tree[parent]){
		int temp=tree[parent];
		tree[parent]=tree[child];  
		tree[child]=temp;
		child=parent;
		parent=child/2;
	}
}

int pop(){
	if(size==0)return 0;
	int ret=tree[1];
	tree[1]=tree[size];
	tree[size--]=0;
	int parent=1;
	int child=parent*2;
	if(child+1<=size)
		if(tree[child]<tree[child+1]) child++;
	while(child<=size&&tree[child]>tree[parent]){
		int temp=tree[parent];
		tree[parent]=tree[child];  
		tree[child]=temp;
		parent=child;
		child=parent*2;
		if(child+1<=size)
			if(tree[child]<tree[child+1]) child++;
	}
	return ret;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,cmd;
	cin>>n;
	while(n--){
		cin>>cmd;
		if(!cmd)
			cout<<pop()<<"\n";
		else
			insert(cmd);
	}
}

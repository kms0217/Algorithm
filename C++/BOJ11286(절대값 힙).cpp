#include<iostream>
#define abs(x) (x>0 ? x:-(x))
using namespace std;

int tree[100001];
int size=0;

bool check(int child,int parent){
	if(abs(tree[child])==abs(tree[parent]))
		return tree[child]<tree[parent];
	return abs(tree[child])<abs(tree[parent]);
}

void push(int num){
	tree[++size]=num;
	int child=size,parent=child/2;
	while(parent!=0&&check(child,parent)){
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
	int parent=1,child=parent*2;
	if(child+1<=size)
		if(check(child+1,child))child++;
	while(child<=size&&check(child,parent)){
		int temp=tree[parent];
		tree[parent]=tree[child];
		tree[child]=temp;
		parent=child;
		child=parent*2;
		if(child+1<=size)
			if(check(child+1,child))child++;
	}
	return ret;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,num;
	cin>>n;
	while(n--){
		cin>>num;
		if(!num)cout<<pop()<<"\n";
		else push(num);
	}
	return 0;
}

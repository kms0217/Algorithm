#include<iostream>
#include<string>
using namespace std;

class mystack{
	private:
		int arr[10000];
		int Size;
		int pos;
	public:
		mystack(){
			Size=0;
			pos=-1;
		}
		void push(int a){
			arr[++pos]=a;
			Size++;
		}
		void pop(){
			if(Size==0)
				cout<<-1<<"\n";
			else{
				cout<<arr[pos--]<<"\n";
				Size--;
			}
				
		}
		void size(){
			cout<<Size<<"\n";
		}
		
		void empty(){
			if(Size==0)
				cout<<1<<"\n";
			else
				cout<<0<<"\n";
		}
		void top(){
			if(Size==0)
				cout<<-1<<"\n";
			else
				cout<<arr[pos]<<"\n";
		}
};

int main(){
	mystack sT;
	int n;
	string str;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>str;
		  if (str == "push"){
            int number;
            cin >> number;
            sT.push(number);
        }
        else if (str == "pop")
            sT.pop();
        else if (str == "size")
            sT.size();
        else if (str == "empty")
            sT.empty();
        else if (str == "top")
            sT.top();
        
    }
}


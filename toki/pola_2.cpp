#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			int k=n-1;
			if(k<j){
				cout<<" ";
			}
			else{
				cout<<"*";
			}
		}
		cout<<endl;
	}
	return 0;
}

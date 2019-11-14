#include<iostream>
using namespace std;
int main(){
	int m,n,arr[105][105];
	cin>>m>>n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=m;i>0;i--){
		for(int j=n;j>0;j--){
			cout<<arr[i][j];
			if(j<n-1){
				cout<<" ";
			}
			else{
				cout<<"\n";
			}
		}
	}	
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int bil;
		cin>>bil;
		
		bool prime=true;
		if(bil==1){
			prime=false;
		}
		
		int divisor=2;
		while(divisor<bil){
			if(bil%divisor==0){
				prime=false;
			}
			divisor++;
		}
		
		if(prime){
			cout<<"YA"<<endl;
		}
		else{
			cout<<"BUKAN"<<endl;
		}
	}
	return 0;
}

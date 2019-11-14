#include<iostream>
using namespace std;
int faktor(int n){
	int tmp=1;
	for(int i=n;i>=1;i--){
		if(i%2==0){
			tmp*=i/2;
		}
		else{
			tmp*=i;
		}
	}
	return tmp;
}
int main(){
	int n;
	cin>>n;
	cout<<faktor(n)<<endl;
	return 0;
}

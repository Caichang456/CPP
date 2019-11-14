#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int bil;
	string des;
	cin>>bil;
	for(int i=0; i<=bil; i++){
		int hasil=1;
		hasil=pow(2,i);
		if(bil==hasil){
			des="ya";
			break;
		}
		if(bil!=hasil){
			des="bukan";
		}
	}
	cout<<des<<endl;
	return 0;
}

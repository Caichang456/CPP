#include<iostream>
using namespace std;
int main(){
	char S[105];
	int K,X=0;
	cin>>S>>K;
	while(S[X]!='\0'){
		cout<<char(int(S[X])+K);
		X++;
	}
	cout<<endl;
	return 0;
}

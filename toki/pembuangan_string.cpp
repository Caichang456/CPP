#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string S,T;
	cin>>S>>T;
	for(int i=0;i<=S.length()-1;i++){
		if(S.substr(i,T.length()-1)==T.substr(i,T.length()-1)){
			S.erase(i,T.length()-1);
		}
	}
	cout<<S<<endl;
	return 0;
}

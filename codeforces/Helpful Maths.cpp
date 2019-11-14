//http://codeforces.com/problemset/problem/339/A
#include<iostream>
using namespace std;
int main(){
	string kalimat;
	cin>>kalimat;
	int tmp[kalimat.length()];
	for(int i=0;i<=kalimat.length();i++){
		if(kalimat[i]=='+'){
			continue;
		}
		else{
			tmp[i]+=kalimat[i];
		}
	}
	for(int i=0;i<=kalimat.length();i++){
		cout<<tmp[i]<<endl;
	}
	return 0;
}

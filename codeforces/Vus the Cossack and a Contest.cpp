//http://codeforces.com/problemset/problem/1186/A
#include<iostream>
using namespace std;
int main(){
	int n,m,k;
	string keterangan;
	cin>>n>>m>>k;
	if(m-n>=0&&k-n>=0){
		keterangan="Yes";
	}
	else{
		keterangan="No";
	}
	cout<<keterangan<<endl;
	return 0;
}

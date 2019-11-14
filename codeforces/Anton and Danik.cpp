//http://codeforces.com/problemset/problem/734/A
#include<iostream>
using namespace std;
int main(){
	int n,a=0,d=0;
	string kata,keterangan;
	cin>>n>>kata;
	for(int i=0;i<=n-1;i++){
		if(kata[i]=='A') a++;
		else if(kata[i]=='D') d++;
	}
	if(a>d) keterangan="Anton";
	else if(a<d) keterangan="Danik";
	else if(a==d) keterangan="Friendship";
	cout<<keterangan<<endl;
	return 0;
}

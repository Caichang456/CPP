//http://codeforces.com/problemset/problem/705/A
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i!=n) cout<<" that ";
		if(i%2==1) cout<<"I hate it";
		else if(i%2==0) cout<<"I love it";
	}
	cout<<endl;
	return 0;
}

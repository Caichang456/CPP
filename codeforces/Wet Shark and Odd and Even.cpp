//http://codeforces.com/problemset/problem/621/A
#include<iostream>
using namespace std;
int main(){
	long long int n,arr[n],tmp=0,x;
	cin>>n;
	for(int i=0;i<=n-1;i++){
		cin>>arr[i];
	}
	if(n%2==1) x=n;
	else x=n-1;
	for(int i=0;i<=x-1;i++){
		tmp+=arr[i];
	}
	cout<<tmp<<endl;
	return 0;
}

#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n; string des;
	cin>>n;
	if(n==0) des="nol";
	else if(n>0) des="positif";
	else if(n<0) des="negatif";
	cout<<des<<endl;
	return 0;
}

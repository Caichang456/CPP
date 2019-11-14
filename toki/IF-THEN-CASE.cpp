#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char n[256]; string des;
	cin>>n;
	if(strlen(n)==1) des="satuan";
	else if(strlen(n)==2) des="puluhan";
	else if(strlen(n)==3) des="ratusan";
	else if(strlen(n)==4) des="ribuan";
	else if(strlen(n)==5) des="puluhribuan";
	cout<<des<<endl;
	return 0;
}

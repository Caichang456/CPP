#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int bil;
	string des;
	cin>>bil;
	if(bil%4==0||bil%7==0){
		des="YES";
	}
	else{
		des="NO";
	}
	cout<<des<<endl;
	return 0;
}

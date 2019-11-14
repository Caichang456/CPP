#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
	char teks1[105];
	cin.getline(teks1,sizeof(teks1));
	for(int i=0;i<teks1[i];i++){
		teks1[i]=tolower(teks1[i]);
	}
	cout<<teks1<<endl;
	return 0;
}

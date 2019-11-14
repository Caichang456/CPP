#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,tgl1,tgl2,bln1,bln2,thn1,thn2,cd,bd;
	string current_date,birth_date;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>current_date>>birth_date;
		istringstream y1(current_date.substr(6,4));
		istringstream y2(birth_date.substr(6,4));
		istringstream m1(current_date.substr(3,2));
		istringstream m2(birth_date.substr(3,2));
		istringstream d1(current_date.substr(0,2));
		istringstream d2(birth_date.substr(0,2));
		if(!(y1>>thn1)||!(y2>>thn2)||!(m1>>bln1)||!(m2>>bln2)||!(d1>>tgl1)||!(d2>>tgl2)){
			thn1=0;
			thn2=0;
			bln1=0;
			bln2=0;
			tgl1=0;
			tgl2=0;
		}
		
	}
	return 0;
}

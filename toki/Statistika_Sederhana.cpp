#include<iostream>
using namespace std;
int main(){
    int n, arr[100005],min,max;
    cin>>n;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    max=arr[0];
    for(int i=0;i<=n-1;i++){
    	if(max<arr[i]){
    		max=arr[i];
		}
	}
    min=arr[0];
    for(int i=0;i<=n-1;i++){
    	if(min>arr[i]){
    		min=arr[i];
		}
	}
    cout<<max<<" "<<min<<endl;
    return 0;
}

#include<iostream>
using namespace std;

int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int i;
	for(i=0;i<=10/2 ; i++){
		int a = arr[i];
		arr[i]=arr[9 - i];
		arr[9 - i] = a;
	}
	
	for(i=0;i<10 ; i++){
		cout<<" "<<arr[i];
	}
	return 0;
}
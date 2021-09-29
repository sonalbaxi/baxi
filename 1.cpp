#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int a[6],i,p,n,f;
	cout<<"enter 6 elements below\n";
	for(i=0;i<6;i++){
		
		cin>>a[i];
	}
	cout<<"enter a number to find its position in an array";
	cin>>n;
	for(i=0;i<6;i++){
		if(a[i]==n){
			f=1;
			p=i;
			break;
		}
	}
	if(f==1){
		cout<<"number found at index:"<<p; 
	}
	else{
		cout<<"not found...";
	}
	getch();
	return 0;
}


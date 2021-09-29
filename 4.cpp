#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main(){
	int i,a[6],k=0,n;
	int *p=new int(8);
	cout<<"enter the no:\n";
	for(i=0;i<8;i++){
		cin>>*(p+i);
	}
	cout<<"enter a number to be deleted  from an array:\n";
	cin>>n;
	for(i=0;i<8;i++){
		if(*(p+i)!=n){
			a[k]=*(p+i);
			++k;
		}
	}
	for(i=0;i<k;i++){
		cout<<"\n"<<a[i];
	}
	getch();
	delete p;
	return 0;
	
	
}


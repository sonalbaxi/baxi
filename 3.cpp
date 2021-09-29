#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[6],fre[6],i,j,count;
	cout<<"enter 6 elements in an array:\n";
	for(i=0;i<6;i++){
		cin>>a[i];
		fre[i]=-1;
		
	}
	for(i=0;i<6;i++){
		count=1;
		for(j=i+1;j<6;j++){
			if(a[i]==a[j]){
				count++;
				fre[j]=0;
			}
		}
		if(fre[i]!=0){
			fre[i]=count;
		}
		
	}
	cout<<"printing occurances of each element in an array...\n";
	for(i=0;i<6;i++){
		if(fre[i]!=0){
			cout<<"frequency of "<<a[i]<<"is="<<fre[i]<<"\n";
		}
	}
	return 0;
}


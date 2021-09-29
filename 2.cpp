#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[6],b[6],i,j,f,x,c[6],d[6],m;
	cout<<"enter 6 elements in first array:\n";
	for(i=0;i<6;i++){
		cin>>a[i];
	}
	cout<<"enter 6 elements in second array:\n";
	for(i=0;i<6;i++){
		cin>>b[i];
	}
	for(j=0;j<6;j++){
		x=a[j];		
			if(x!=b[j]){
			f=2;
			}
			else{
			
				f=1;
			
			}
		
	}
	if(f==1){
						cout<<"two arrays are same";
		
	}
	else{
	
		cout<<"arrays are not same";
		cout<<"\nmaking  clone of both array:\n";
		for(m=0;m<6;m++){
			c[m]=a[m];
			d[m]=b[m];
			cout<<c[m]<<"\t"<<d[m]<<"\n";
		}
	}
	getch();
	return 0;
	
}


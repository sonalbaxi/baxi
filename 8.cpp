#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[10][10],b[10][3],m,n,s=0,i,j;
	cout<<"enter the order of m*n of the sparse matrix:";
	cin>>m>>n;
	cout<<"enter the elements in the sparse matrix(mostly zero):\n";
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<i<<j;
			cin>>a[i][j];
		}
	}
	cout<<"the given matrix is:\n";
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(a[i][j]!=0){
				b[s][0]=a[i][j];
				b[s][1]=i;
				b[s][2]=j;
				s++;
			}
		}
	}
	cout<<"the sparse matrix is given by:\n";
	cout<<"numbers row column\n ";
	for(i=0;i<s;i++){
		for(j=0;j<3;j++){
			cout<<b[i][j]<<"\t";
		}
		cout<<endl;
	}
	getch();
	return 0;
}


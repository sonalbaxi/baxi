#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int mat1[3][3],i,j,mat2[3][3];
	float determinant=0;
	cout<<"\nenter 3*3 matrix element:\n";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>mat1[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<mat1[i][j]<<"\t";
		}
		cout<<endl;
	}
	for(i=0;i<3;i++){
		determinant=determinant+(mat1[0][i]*(mat1[1][(i+1)%3]*mat1[2][(i+2)%3]-mat1[1][(i+2)%3]*mat1[2][(i+1)%3]));
		
		
	}
	cout<<"\ndeterminant:"<<determinant<<endl;
	cout<<"\nadjoint of matrix:\n";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			mat2[i][j]=(float)(((mat1[(i+1)%3][(j+1)%3]*mat1[(i+2)%3][(j+2)%3])-(mat1[(i+1)%3][(j+2)%3]*mat1[(i+2)%3][(j+1)%3])));
		}
	}
	cout<<"\nGiven matrix..\n";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			mat1[j][i]=mat2[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<mat1[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"\ninverse of matrix..\n";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<(float)(mat1[i][j]/determinant)<<"\t";
		}
		cout<<endl;
	}
	getch();

	return 0;
}


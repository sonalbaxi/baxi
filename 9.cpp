#include<iostream>
using namespace std;
int main(){
	int row,coloum,row2,coloum2,count=0,i,j;
	cout<<"enter row and coloum for matrix1:";
	cin>>row>>coloum;
	int mat[row][coloum];
	int temp[row*coloum/2];
	cout<<endl<<"enter element: "<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<coloum;j++)
		{
			cin>>mat[i][j];
			if(mat[i][j]==0)
				++count;
		}
	}
	int k=0;
	if(count>(row*coloum)/2)
	{
		cout<<"metrix1 is sparse matrix."<<endl;
		cout<<"sparse matrix :"<<endl;
		cout<<"rows  	"<<"    coloum"<<"		value\n";
		
		for(i=0;i<row;i++)
		{
			for(j=0;j<coloum;j++)
			{
				if(mat[i][j]!=0)
				{
					temp[k]=mat[i][j];
					cout<<i+1	<<"		"<<j+1<<"		"<<temp[k++]<<endl;
				}
				
			}
		}
	}
	else
	{
		cout<<"matrix1 is not sparse marix.\n";
	}
	
	cout<<"enter row and coloum for matrix2:";
	cin>>row2>>coloum2;
	int mat2[row2][coloum2];
	count=0;
	int temp2[row2*coloum2/2];
	cout<<endl<<"enter element: "<<endl;
	for(i=0;i<row2;i++)
	{
		for(j=0;j<coloum2;j++)
		{
			cin>>mat2[i][j];
			if(mat2[i][j]==0)
				++count;
		}
	}
	int k2=0;
	if(count>(row2*coloum2)/2)
	{
		cout<<"matrix2 is sparse matrix."<<endl;
		cout<<"sparse matrix :"<<endl;
		cout<<"rows  	"<<"    coloum"<<"		value\n";
		
		for(i=0;i<row2;i++)
		{
			for(j=0;j<coloum2;j++)
			{
				if(mat2[i][j]!=0)
				{
					temp2[k2]=mat2[i][j];
					cout<<i+1	<<"		"<<j+1<<"		"<<temp2[k2++]<<endl;
				}
				
			}
		}
	}
	else
	{
		cout<<"matrix2 is not sparse marix.";
	}
	
	int choice=0,mat3[(row*coloum)-1],temp3[row2][coloum2];
	if(row!=row2 && coloum!=coloum2)
	{
cout<<"you don't entered proper row and coloum so that addition/substration is not possible";
	}
	else
	{
		while(choice!=5)
		{
		
			cout<<"\nMENU\n1)	ADDITION\n2)	SUBSTRATION\n3)	MULTIPLICATION\n4)	DIVISION\n5)	EXIT\n";
			cout<<"enter your choice:";
			cin>>choice;
			switch(choice)
			{
			case 1:
				cout<<"row	"<<"coloum	"<<"value"<<endl;
				for(i=0;i<row;i++)
				{
					for(j=0;j<coloum;j++)
					{
						if(mat[i][j]!=0 || mat2[i][j]!=0)
						{
							mat3[k]=mat[i][j]+mat2[i][j];
							cout<<i+1<<"	"<<j+1<<"	"<<mat3[k++];
						}
					}
				}
				break;
			case 2:
				cout<<"row	"<<"coloum	"<<"value"<<endl;
				for(i=0;i<row;i++)
				{
					for(j=0;j<coloum;j++)
					{
						if(mat[i][j]!=0 || mat2[i][j]!=0)
						{
							mat3[k]=mat[i][j]-mat2[i][j];
							cout<<i+1<<"	"<<j+1<<"									"<<mat3[k++];
						}
					}
				}
				break;
			case 3:
				for(i=0;i<row;i++)
				{
					for(j=0;j<coloum;j++)
					{
						temp3[j][i]=mat2[i][j];
					}
				}
				cout<<"row	"<<"coloum	"<<"value"<<endl;
				for(i=0;i<row;i++)
				{
					for(j=0;j<coloum;j++)
{
						if(mat[i][j]!=0 && temp3[i][j]!=0)
						{
							mat3[k]=mat[i][j]*temp3[i][j];
							cout<<i+1<<"	"<<j+1<<"									"<<mat3[k++];
						}
					}
				}
		
				break;
			case 4:
				cout<<"row	"<<"coloum	"<<"value"<<endl;
				for(i=0;i<row;i++)
				{
		
					for(j=0;j<coloum;j++)
					{
						if(mat[i][j]!=0 || mat2[i][j]!=0)
						{
							mat3[k]=(float)mat[i][j]/mat2[i][j];
							cout<<i+1<<"	"<<j+1<<"	"<<mat3[k++];
						}
					}
				}
				break;
			default:
				cout<<"invalid choice.";
				
			}
		}
	}
}


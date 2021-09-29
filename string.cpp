
#include<iostream>
using namespace std;
int main(){
	char str1[100],str2[100],ch;
	int choice=0,length,count=0,i,lower=0,upper=0;
	cout<<"\nENTER FIRST STRING: ";
	gets(str1);
	cout<<"\nENTER second STRING: ";
	gets(str2);
	while(choice!=12){
		cout<<"\n_______________MENU______________\n1) LENGTH OF FiRST STRING\n2)LENGTH OF SECOND STRING\n3)TO FIND CHARACTER IN FIRST STRING\n4)TO FIND CHARACTER IN SECOND STRING\n5)UPPERCASE FOR FIRST STRING\n6)LOWERCASE FOR FIRST STRING\n7)UPPERCASE FOR SECOND STRING\n8)LOWERCASE FOR SECOND STRING\n9)COMPARE STRING\n10)ADD SRING\n11)COPY STRING\n12)EXIT";
		cout<<"\nENTER CHOICE: ";
		cin>>choice;
		switch(choice){
			case 1:
				length=1;
				while(str1[length]!='\0')
					++length;
				cout<<"LENGTH OF FIRST STRING: "<<length;
				break;
			case 2:
				length=1;
				while(str2[length]!='\0')
					++length;
				cout<<"LENGTH OF SECOND STRING: "<<length;
				break;
			case 3:
				cout<<"\nENTER CHARACTER THAT YOU WANT TO FIND: ";
				cin>>ch;
				for(int i=0;str1[i]!='\0';i++){
					if(str1[i]==ch)
						count=i+1;
				}
				if(count==0)
					cout<<"\nCHARACTER  "<<ch<<" NOT FOUND IN STRING.";
				else
					cout<<"\nOCCURENCE OF CHARACTER "<<ch<<":"<<count;
				break;
			case 4:
				cout<<"\nENTER CHARACTER THAT YOU WANT TO FIND: ";
				cin>>ch;
				for(int i=0;str2[i]!='\0';i++)
				{
					if(str2[i]==ch)
						count=i+1;
				}
				if(count==0)
					cout<<"\nCHARACTER "<<ch<<"NOT FOUND IN STRING.";
				else
					cout<<"\nOCCURENCE OF CHARACTER "<<ch<<":"<<count;
				break;
			case 5:
				i=0;
				upper=0;
				while(str1[i]!='\0'){
					if(str1[i]>='A' && str1[i]<='Z')
						upper++;
					i++;
				}
				cout<<"\nUPPER CASE: "<<upper;
				break;
			case 6:
				i=0;
				lower=0;
				while(str1[i]!='\0'){
					if(str1[i]>='a' && str1[i]<='z')
						lower++;
					i++;
				}
				cout<<"\nLOWER CASE: "<<lower;
				break;
			case 7:
				i=0;
				upper=0;
				while(str2[i]!='\0'){
					if(str2[i]>='A' && str2[i]<='Z')
						upper++;
					i++;
				}
				cout<<"\nUPPER CASE: "<<upper;
				break;
			case 8:
				i=0;
				lower=0;
				while(str2[i]!='\0'){
					if(str2[i]>='a' && str2[i]<='z')
						lower++;
					i++;
				}
				cout<<"\nLOWER CASE: "<<lower;
				break;
			case 9:
				i=0;
				while(str1[i]==str2[i] && str1[i]!='\0')
					i++;
				if(str1[i]>str2[i])
					cout<<"\nstr1>str2";
				else if(str1[i]<str2[i])
					cout<<"\nstr1<str2";
				else
					cout<<"\nstr1=str2";
				break;
			case 10:
				length=0;
				while(str1[length]!='\0')
					length++;
				for(i=0;str2[i]!='\0';length++,i++)
					str1[length]=str2[i];
				str1[length]='\0';
				cout<<str1;
				break;
			case 11:
				cout<<"\nCOPY STRING: ";
				for(i=0;str1[i]!='\0';i++)
					str2[i]=str1[i];
				str2[i]='\0';
				cout<<str2;
				break;
			case 12:
				exit(0);
				break;
			default:
				cout<<"\nENTER VALID NUMBER:";	
		}
	}
}


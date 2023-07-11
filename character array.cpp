#include<iostream>
using namespace std;
int main()
{
//	char r,o,h,i,t;
	//cin>>r>>o>>h>>i>>t;
	char name[1000];
	cout<<"enter your name :(note: enter # after the end of your name )";
	int i=0;
	while(1)  //here i is the previous input
	{
		cin>>name[i];
		if(name[i]=='#') break;
		i++;
	}
	
	i=0;
	
	cout<<"the name you have just entered"<<endl;
	while(name[i]!='#')
	{
		cout<<name[i];
		i++;
	}
}

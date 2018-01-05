#include<iostream>
using namespace std;
int main()
{
	char x[100];int m=0,w=0,l=0,r=0;
	cin.getline(x,100);
	int i=0;
	while(x[i]!='\0')
	{
		if(x[i]>=97&&x[i]<=122)
			x[i]=x[i]-32;
			i++;
	}
	
//	r=i-w-m-l;
//	cout<<"Duze: "<<w<<" "<<"male: "<<m<<" "<<"cyfry: "<<l<<" "<<"pozostale: "<<r;
	cout<<x;
}

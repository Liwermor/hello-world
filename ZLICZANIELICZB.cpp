#include<iostream>
using namespace std;
int main()
{
	char x[10];int m=0,w=0,l=0,r=0;
	cin.getline(x,10);
	int i=0;
	while(x[i]!='\0')
	{
		if(x[i]>=65&&x[i]<=90){w++;}
		if(x[i]>=97&&x[i]<=122){m++;}
		if(x[i]>=48&&x[i]<=57){l++;}
			i++;
	}
	
	r=i-w-m-l;
	cout<<"Duze: "<<w<<" "<<"male: "<<m<<" "<<"cyfry: "<<l<<" "<<"pozostale: "<<r;
}


#include<iostream>
using namespace std;
int main()
{
char a[100];
int b,c;
		cin>>a;
		b=0;
			for(int i=0;i<101;i++)
			{
				if(a[i]==97||a[i]==101||a[i]==105||a[i]==111||a[i]==117||a[i]==121)
				a[i]-=32;
			}cout<<a;
	
			
}
	
	









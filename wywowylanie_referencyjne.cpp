#include<iostream>
using namespace std;
int fun(int &x)
{
	return x=x*x;
}

	int main()
	{
		int a=5;
		cout<<a<<endl;
		cout<<fun(a)<<endl;
		cout<<a<<endl;
	}

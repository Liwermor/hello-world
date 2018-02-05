#include<iostream>
using namespace std;
int main()
{
	int k,i=0,a;
	char z[100];
	
	cout<<"1. szyfroawnie/2. deszyfrowanie."<<endl;
	cin>>a;
		switch(a)
		{
			case 1:
				{
			cin>>k;
			k=k%25;
			while(z[i]!='\0')
			cin>>z;
			{
				if(z[i]+k>122)
				{
					int r=(122-z[i])+k;
					cout<<(char)(96+r)<<"";
					
				}else cout<<(char)(z[i]+k);
				i++;	}
				break;
				}
				
				case 2:
					{
						
						break;
					}
					
					default:
						{
							cout<<"";
							break;
						}
		}


			
}
	
	









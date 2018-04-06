#include <iostream>
#include <fstream>
#include <string>
using namespace std;
char linie[1000];
int a=0,b=0,c=0,d=0,e=0;
char x;
	int main()
	{
	ofstream zapis("wynik.txt");
	ifstream odczyt("dane.txt");
	ifstream odczyt1("dane.txt");
	if(!odczyt)
		{
		cout<<"error.";
		return 0;
		}
		
while(!odczyt.eof())
		{
		odczyt.get(x);
		if(x!='\0')
		{
		d++;
			if(d>e)
			{
			e=d;
			d=0;
			}	
		}
			if(odczyt)
			{
				if(x=='X')b++;
				if(x=='.')c++;
			}

		}
while(!odczyt1.eof())
{
			odczyt1.getline(linie,1000);
			{
				a++;
			}


}		
		zapis<<"W: "<<a<<endl;
		zapis<<"X: "<<b<<endl;
		zapis<<"K: "<<c<<endl;
		zapis<<"D: "<<e-1<<endl;
			
			
		
	 odczyt.close();
	 zapis.close();
	 odczyt1.close();
	}
	


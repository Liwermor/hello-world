#include<iostream>
#include<fstream>
using namespace std;
int ile=0,lit=0,cyf=0;
char x;
int main()
{
ifstream odczyt("dane.txt");
	if(!odczyt)
	{
		cout<<"error.";
		return 0;
	}
	
	ofstream zapis("wynik.txt");
		while(!odczyt.eof())
		{
		odczyt.get(x);
			if(odczyt)
			{
				if(isalpha(x))lit++;
				if(isdigit(x))cyf++;
				if(isalnum(x))
				{
					zapis<<x;
				}
			}

		}
			zapis<<endl<<"litery: "<<lit<<endl;
			zapis<<"cyfry: "<<cyf<<endl;
			zapis<<"Wszystko: "<<cyf+lit;
		 		odczyt.close();
				zapis.close();
		
	
}

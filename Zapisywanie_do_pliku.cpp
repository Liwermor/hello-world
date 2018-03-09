#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int suma=0,x,y,z,naj;
	ifstream odczyt("dane.txt");
		if(!odczyt)
		{
			cout<<"error.";
			return 0;
		}
			while(odczyt>>x>>y>>z)
			{
			odczyt>>x;
			odczyt>>y;
			odczyt>>z;
			}
			odczyt.close();
				if(x >= y && x >= z) naj= x;
   			    if(y >= x && y >= z) naj= y;
    			if(z >= x && z >= y) naj= z;
    			
			
				ofstream zapis("wynik.txt");
					if(!zapis)
					{
						cout<<"Error zapis.";
						return 0;
					}
						zapis<<naj;
						zapis.close();							
	return 0;
}


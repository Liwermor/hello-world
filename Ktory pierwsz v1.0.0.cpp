#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	char x[100];
	char y[100];
	Beep(500,100);
	cout<<"ELO"<<endl;
	Sleep(1000);
	Beep(500,100);
	system("cls"); 
		cout<<"Sprawdz, ktory jest blizej w slowniku!"<<endl;
		Sleep(2000);
	Beep(500,100);
	system("cls"); 
		cout<<"Podaj wyraz nr 1: "<<endl;
		
		
		cin.getline(x,100);
			Sleep(2000);
	Beep(500,100);
		system("cls"); 
			cout<<"Podaj wyraz nr 2: "<<endl;

		cin.getline(y,100);
			int i=0,odp=0;
				while(x[i]!='\0'&&odp==0)
				{
				if(x[i]>y[i]){ odp=2;}
				else if(x[i]<y[i]) {odp=1;}
				i++;
				}
				if(odp==0){
	Sleep(2000);
		Beep(500,1000);
		
				 cout<<"te same"<<endl;}
					else if(odp==1){
						Sleep(2000);
		Beep(500,1000);
		
					cout<<"pierwszy"<<endl;}
						else if(odp==2){
							Sleep(2000);
		Beep(500,1000);
		
						cout<<"drugi"<<endl;}
}

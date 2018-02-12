#include<iostream>
using namespace std;
void mnozenie()
	{
		int x, y;
		cin>>x>>y;
		cout<<x*y<<endl;
	}
		void dzielenie()
		{
			int x, y;
			cin>>x>>y;
			if(y==0)
			{
				cout<<"Nie dziel przez zero !"<<endl;
				dzielenie();
			}else
					cout<<x/y<<endl;
		}
		
			void dodawanie()
			{
				int x, y;
				cin>>x>>y;
				cout<<x+y<<endl;
			}
				void odejmowanie()
				{
					int x, y;
					cin>>x>>y;
					cout<<x-y<<endl;
				}
					int silnia (int n)
						{
							if (n == 0) return 1;
							else return n*silnia(n-1);
							}
	
		int main()
		{
			int wybor;
			cout<<"Wybierz dzialanie!: "<<endl;
			cout<<"1. Mnozenie"<<endl;
			cout<<"2. Dzielenie"<<endl;
			cout<<"3. Dodawanie"<<endl;
			cout<<"4. Odejmowanie"<<endl;
			cout<<"5. Silnia"<<endl;
			cin>>wybor;
				switch(wybor)
				{
					case 1:
						{
							mnozenie();	
							break;	
						}
						case 2:
						{
							dzielenie();	
							break;	
						}
						
						case 3:
						{
							dodawanie();	
							break;	
						}
						
						case 4:
						{
							odejmowanie();	
							break;	
						}
							case 5:
						{
									int a;
							cin>>a;
							cout<<silnia(a);	
							break;	
						}
						
						default:
						{
							cout<<main();	
						}
						
				}
				
				
		}

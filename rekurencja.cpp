#include<iostream>
using namespace std;
long long int iter_fib(int n)
		{
		int aF=1,bF=1,F;
			if(n==1||n==2) return 1;
			else
				{
					for(int i=3;i<=n;i++)
						{
							F=aF+bF;
							bF=aF;
							aF=F;
						}
				 return F;
				}
		}
		
		
		long long int rek_fib(int n)
		{
			if(n==1||n==2) return 1;
				else
				{
					return rek_fib(n-1)+rek_fib(n-2);
				}
			
			
		}
		
			int main()
			{
			
					int b,c,d;
					cout<<"1. Ciag rekurencyjny"<<endl;
					cout<<"2. Ciag Iteracyjny"<<endl;
					cin>>b;
						switch(b)
						{
							case 1:
								{
									int a;
									cin>>a;
									cout<<rek_fib(a);
									break;
								}
								
								case 2:
									{
										int a;
									cin>>a;
									cout<<iter_fib(a);
									break;
										break;
									}
										default:
											{
												main();
											}
							
						}
			}

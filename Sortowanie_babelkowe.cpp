#include<cstdlib>
#include<iostream>
#include<ctime>
using namespace std; 
int main()
{
	int t[20],k,pom;
		srand(time(NULL));
		//losowanie do tablicy
		for(int i=0;i<20;i++){
			t[i] = rand()%100;
			cout<<t[i] << " ";
		}cout<<endl;
		//sortowanie
		for(int i=19;i>0;i--){
			for(int j=0;j<i;j++)
			if(t[j]>t[j+1])
				{pom=t[j+1];
				t[j+1]=t[j];
				t[j]=pom;
				}
			
		}
		//wysw wyniku
		for(int i=0;i<20;i++)
			cout<<t[i]<<" ";
			cout<<endl;
			return 0;
		
	
}

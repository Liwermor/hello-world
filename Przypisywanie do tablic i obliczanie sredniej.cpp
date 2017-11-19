#include<iostream>
using namespace std;
float ocena[5],suma=0,srednia;
int main()
{
        for(int i=0;i<5;i++)
        {
            cout<<"podaj "<<i+1<<" ocene"<<endl;
            cin>>ocena[i];
                suma+=ocena[i];
        }
        cout<<"srednia = "<<suma/5<<endl;

}


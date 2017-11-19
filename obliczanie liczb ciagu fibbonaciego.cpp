#include<iostream>
#include<iomanip>
using namespace std;
int n;
long double liczby[100000];
int main()
{
cout<<"ile liczb chcesz wyznaczyc: "<<endl;
cin>>n;
        liczby[0]=1;
        liczby[1]=1;
    for(int i=2;i<n;i++)
    {
            liczby[i]=liczby[i-1]+liczby[i-2];

    }
    cout<<setprecision(10000);
  //    for(int i=0;i<n;i++)
    //{
       //     cout<<endl<<"wyraz nr "<<i+1<<" :"<<liczby[i]<<endl;
    // }
    //cout<<endl<<"yraz nr "<<n<<"= "<<liczby[n-1]<<endl;
    cout<<liczby[n-1]/liczby[n-2];
}

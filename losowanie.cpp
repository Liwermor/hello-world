#include<iostream>
#include<cstdlib>
#include<time.h>
#include<windows.h>
using namespace std;
int liczba;
int main()
{

    srand(time(NULL));
    liczba=rand()%100+1;
cout<<liczba;
   }



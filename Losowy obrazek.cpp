#include <iostream>
#include<windows.h>
#include<time.h>
using namespace std;
int a,b=0,c;
char niewiem[11][11];
int main()
{
srand(time(NULL));
        int i=1;
    do
    {
        a=rand()%10;
        if(a<5)
                {
               niewiem[i+1][i+1]='-';
                }else
                    {
                        niewiem[i+1][i+1]='+';
                    }
            cout<<niewiem[i][i];
                                c=(i%10);
                            if(c==1)
                            {
                    cout<<endl;
                            }

i++;
b++;
    }
    while(i<=101);

    return 0;
}

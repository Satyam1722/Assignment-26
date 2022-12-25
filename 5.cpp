#include <iostream>
#include<math.h>
using namespace std;

class Date
{
    int d;
    int m;
    int y;

public:
    Date()
    {
        d=0;
        m=0;
        y=0;
    }

    void setDate(int a,int b,int c)
    {
        d=a;
        m=b;
        y=c;
    }

    void showDate()
    {
        cout<<d<<"/"<<m<<"/"<<y<<endl;
    }


};

int main()
{
    Date d1;
    d1.setDate(5,5,2022);
    d1.showDate();
    return 0;
}
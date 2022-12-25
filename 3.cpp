#include <iostream>
#include<math.h>
using namespace std;

class Cube
{
    int a;
    int volume;

public:
    Cube()
    {
        a=0;
        volume=0;
    }
    void setA(int x)
    {
        a=x;
    }
    void showA()
    {
        cout<<a;
    }
    void showVolume()
    {
        cout<<volume;
    }

    void Volume()
    {
        volume=pow(a, 3);
    }
};

int main()
{
    Cube c;
    c.setA(5);
    c.Volume();
    c.showA();
    cout<<"=";
    c.showVolume();
    return 0;
}
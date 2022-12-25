#include<iostream>
using namespace std;

class Counter{
static int c;
public:

Counter(){
    c++;
}

static void showC(){
    cout<<c<<endl;
}
};

int Counter::c;

int main(){
    Counter c1,c2,c3,c4;
    Counter::showC();
    return 0;
}
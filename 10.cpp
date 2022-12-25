#include<iostream>
using namespace std;

class Counter{
static int c;
public:

void inc(){
    c++;
}

static void showC(){
    cout<<c<<endl;
}
};

int Counter::c;

int main(){
    Counter c;
    c.inc();
    c.inc();
    c.inc();

    Counter::showC();
    return 0;
}
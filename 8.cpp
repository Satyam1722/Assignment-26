#include<iostream>

using namespace std;

class Bank{
int p;
float r;
int t;
float si;

    public:

    Bank(){
        p=0;
        r=0;
        t=0;
    }

   void setp(int a){
      p=a;
    }
      void setr(float a){
      r=a;
    }
       void sett(int a){
      t=a;
    }

    void simple_intrest(){
        si=(p*r*t)/100;
    }
    void show(){
        cout<<"si = "<<si<<endl;
    }

   
    
};

int main(){
 Bank b;
 b.setp(6000);
 b.setr(5.4);
 b.sett(4);
 b.simple_intrest();
 b.show();

    return 0;
}
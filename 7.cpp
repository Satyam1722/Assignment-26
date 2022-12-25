#include<iostream>

using namespace std;

class Box{
int l;
int b;
int h;
int v;

    public:

    Box(){
        l=0;
        b=0;
        h=0;
    }

   void set(int a,int m,int c){
        l=a;
        b=m;
        h=c;
    }
    void volume(){
        v=l*b*h;
    }

    void showVolume(){
        cout<<"volume = "<<v;

    }
    
};

int main(){
    Box b;
    b.set(3,5,6);
    b.volume();
    b.showVolume();
    return 0;
}
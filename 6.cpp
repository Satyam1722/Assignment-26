#include<iostream>
#include<string.h>
using namespace std;

class Student{
    int id;
    char n[50];
    char c[50];

    public:
    Student(int a,char name[40],char course[40]){
        id=a;
        strcpy(n,name);
        strcpy(c,course);
    }
    Student(){
        
    }

    void show(){
        cout<<id<<" "<<n<<" "<<c<<endl;
    }
    
};

int main(){
    Student s;//(3,"satyam","mca");
    s.show();
    return 0;
}
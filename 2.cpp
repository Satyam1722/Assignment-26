#include<iostream>
using namespace std;

class Time{
int h;
int m;
int s;

public:
 void setTime(int a,int b,int c){
    h=a;
    m=b;
    s=c;
 }
 void showTime(){
    cout<<h<<":"<<m<<":"<<s<<endl;
 }
 void normalize(){
    m+=s/60;
    s=s%60;
    h+=m/60;
    m=m%60;
 }

 Time add(Time t){
    Time temp;
    temp.h=h+t.h;
    temp.m=m+t.m;
    temp.s=s+t.s;
    temp.normalize();
    return temp;
 }

};

int main(){
    Time t1,t2,t3;
    t1.setTime(5,699,455);
    t2.setTime(6,45,453);
    t3=t1.add(t2);
    t3.showTime();
    return 0;
}
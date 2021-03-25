#include "rider.h"
#include <string>
#include <iostream>

using namespace std;

Rider::Rider(string name1, int age1, string type1 ){
        name=name1;
        age=age1;
        type=type1;
        key=101399;
}
string Rider::getname(){
    return name;
}
int Rider::getage(){
    return age;
}
string Rider::gettype(){
    return type;
}
bool Rider::equal(Rider r){
    return r.name==name && r.age==age&& r.type==type;
}
int Rider::hashcode(){
    int asc;
    int b=0;
    for (int i=0;i<name.length();i++)
    {
        asc = name[i];
        b+=asc;
    }
    for (int i=0;i<type.length();i++)
    {
        asc = type[i];
        b+=asc;
    }
    b*=age;
    // cout << b << endl;
    return b%key;
    
}






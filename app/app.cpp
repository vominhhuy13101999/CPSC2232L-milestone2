// #include "../Heap/heap.h"
#include "../Fare/fare.h"
#include "../Riders/rider.h"
#include <unordered_map>
#include <string>
#include <iostream>
using namespace std;



int main_1(){
    Rider a1("Dave",18,"highschool");
    Rider a2("Jave",17,"highschool");
    Rider a3("Mary",19,"sophomore");
    Rider a4("Jane",20,"graduated");
    Rider a5("Rose",121,"phd");
    Rider a6("Dave",18,"highschool");
    Rider a7("Jane",20,"graduated");
    
    unordered_map<string, Rider> busmap;


    busmap.insert({"New York",a1});
    busmap.insert({"Boston",a2});
    busmap.insert({"Connecticut",a3});
    busmap.insert({"Canada",a4});
    busmap.insert({"Africa",a5});
    busmap.insert({"Chicago",a6});
    busmap.insert({"Colorado",a7});

    cout << busmap.size()<<endl;

  // 
  for ( auto it = busmap.begin(); it != busmap.end(); ++it ) {
    cout <<  it->first <<": " << it->second.hashcode()<<endl;
  }

  
  if(a1.equal(a6)){
    cout<< a1.equal(a6)<<endl;
    cout<< "a1 hash code: "<<a1.hashcode()<<endl;
    cout<< "a6 hash code: "<<a6.hashcode()<<endl;}
  if (a4.equal(a7)){
      cout<< "a4 hash code: "<<a4.hashcode()<<endl;
      cout<< "a7 hash code: "<<a7.hashcode()<<endl;}
  return 0;
}
  
int main_3(){
    BusFare bf;
    bf.payBusFare(180);
    return 0;
}

int main(){
  main_1();
  main_3();
  return 0;

}

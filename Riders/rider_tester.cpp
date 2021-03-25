#include "rider.h"
#include <unordered_map>
#include <iostream>
using namespace std;

int main1(){
    Rider a1("Dave",18,"highschool");
    Rider a2("Jave",17,"highschool");
    Rider a3("Mary",19,"sophomore");
    Rider a4("Jane",20,"graduated");
    Rider a5("Rose",121,"phd");

    
    unordered_map<string, Rider> busmap;


    busmap.insert({"New York",a1});
    busmap.insert({"Boston",a2});
    busmap.insert({"Connecticut",a3});
    busmap.insert({"Canada",a4});
    busmap.insert({"Africa",a5});

    cout << busmap.size()<<endl;

  // 
  for ( auto it = busmap.begin(); it != busmap.end(); ++it ) {
    cout <<  it->first <<": " << it->second.hashcode()<<endl;
  }

  Rider a6("Dave",18,"highschool");

  cout<< a1.equal(a6)<<endl;
  cout<< "a1 hash code: "<<a1.hashcode()<<endl;
  cout<< "a6 hash code: "<<a6.hashcode()<<endl;



  return 0;

    // for (auto x : busmap)
    //   cout << x.first << " " << x.second.hashcode() << endl;
}



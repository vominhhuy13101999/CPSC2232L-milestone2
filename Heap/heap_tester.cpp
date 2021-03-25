#include "heap.h"
#include <iostream>
using namespace std;

int main2(){
    Heap h; 
    h.insert(1);
    h.insert(2);
    h.insert(3);
    h.insert(4);
    h.insert(5);
    h.insert(6);
    h.insert(7);
    h.insert(8);
    h.insert(9);
    
    cout<<h.store.size()<<endl;
    h.display();
    h.swap(1,3);
    cout<<h.get_parent(3)<<endl;
    cout<<h.get_left_child(2)<<endl;
    cout<<h.extractmax()<<endl;
    h.display();
    cout<<h.extractmax()<<endl;
    h.display();
    cout<<h.extractmax()<<endl;
    h.display();
    cout<<h.extractmax()<<endl;
    h.display();
    cout<<h.extractmax()<<endl;
    h.display();
    return 0;
}






#include <string>
#include "heap.h"
#include <vector>
#include <iostream>
using namespace std;

Heap::Heap(){
    store.push_back(0);
    // cout<<store.at(0)<<endl;

}
void Heap::display(){
    for ( int i=1;i<store.size();i++){
        cout<< store.at(i)<<endl;
    }
}

int Heap::extractmax(){
    
    if (store.size()>2){
        int r=store.at(1);
        store.at(1)=store.back();
        store.pop_back();
        this->head_down(1);
        return r;
    }
    else if(store.size()==2){
        int r=store.at(1);
        store.pop_back();
        return r;


    }
    else{
        cout<<"Nothing in list"<<endl;
        return 0;
    }
    
}
void Heap::insert(int num){

    store.push_back(num);
    this->heap_up(store.size()-1);

}

int Heap::get_parent(int index){
    if (index<2){
        cout<< " No parents"<<endl;
        return 0;
    }
    if (index%2==1){
        return (index-1)/2;
    }
    else{
        return index/2;}

}
int Heap::get_left_child(int index){
    int a=2*index;
    if (a>=store.size()){
        return 0;}
    else
        return a;
    

}

int Heap::get_right_child(int index){
    int a=2*index+1;
    if (a>=store.size())
        return 0;
    else
        return a;

}
void Heap::heap_up(int index){
    while (index>1){
        int p=this->get_parent(index);
        if (store.at(index)>store.at(p)){
            this->swap(index,p);
            index=p;
        }
        else{
            break;
        }
    }
}
void Heap::head_down(int index){
    while (index<store.size()){
        int l=this->get_left_child(index);
        
        int r=this->get_right_child(index);

        if (store.at(index)>=store.at(l)){
            if (store.at(index)>=store.at(r)){
                break;
            }
            else{
                this->swap(index,r);
                index=r;}

        }
        else{
            this->swap(index,l);
            index=l;
        }



    }
}

void Heap::swap(int index1,int index2){
    int size=store.size();

    if ((index1< size) &&  (index2<size)){
        int a=store[index1];
        store[index1]=store[index2];
        store[index2]=a;
        

    }
    else{
        cout<<"index bigger than len"<<endl;
    }
} 





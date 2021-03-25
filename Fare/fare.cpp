#include "fare.h"
using namespace std;

BusFare::BusFare(){
    h.insert(1);
    h.insert(1);
    h.insert(5);
    h.insert(5);
    h.insert(10);
    h.insert(10);
    h.insert(25);
    h.insert(25);
    h.insert(50);
    h.insert(50);
    h.insert(100);
    h.insert(100);
    // h.display();

}

int BusFare::getMaxFromHeap(){
    return h.extractmax();
}
int BusFare::payBusFare(int fee){
    if (fee==0){
        f.display();
        return 0;
    }
    else {
        int a=this->getMaxFromHeap();
        if (a>fee || a==10 ){
            return this->payBusFare(fee);
        }
        else{
            fee-=a;
            f.insert(a);
            return this->payBusFare(fee);

        }
    }




    return 0;

}





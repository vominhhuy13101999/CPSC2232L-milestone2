#include <string>
#include <vector>

// using namespace std;


class Heap{

    public:
        std::vector<int> store;
    
        Heap();
        void insert(int num);
        int extractmax();
        void display();
        int get_parent(int index);
        int get_left_child(int index);
        int get_right_child(int index);
        void heap_up(int index);
        void head_down(int index);
        void swap(int index1,int index2);





};
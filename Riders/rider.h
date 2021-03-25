// using namespace std;

#include <string>

class Rider{
    private:
        std::string name;
        int age;
        std::string type;
        int key;
    public:
        Rider(std::string name1, int age1, std::string type1 );
        std::string getname();
        int getage();
        std::string gettype();
        int hashcode();
        bool equal(Rider r);
};
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;


int main()
{
    string user;
    int ascChar;

    getline(cin, user);

    cout << user << endl;
    int a=0;
    for (int i=0;i<user.length();i++)
    {
        ascChar = user[i];
        a+=ascChar;
        cout << ascChar << endl;
    }
    cout << a << endl;

    return 0;
}
#include "person.h" //now included in tweeter.h
#include "tweeter.h"
#include "status.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

int main()
{
    Person p1("Taylor", "Conners", 87);
    {
        Tweeter t1("Someone", "Else", 452, "@whoever");
        string name2 = t1.getName();
    }
    cout << "after innermost block" << endl;
    string name = p1.getName();

    Status s = Pending;
    s = Approved;

    FileError fe = FileError::notfound;
    fe = FileError::ok;

    NetworkError ne = NetworkError::disconnected;
    ne = NetworkError::ok;

    return 0;
}
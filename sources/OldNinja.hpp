#include <iostream>
#include "Ninja.hpp"

using namespace std;

namespace ariel {


    class OldNinja : public Ninja {

    public:
        OldNinja(string name, Point pos);

        ~OldNinja();

        string print();
    };
}
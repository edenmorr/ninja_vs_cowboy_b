#include <iostream>
#include "Ninja.hpp"
#include "Point.hpp"
using namespace std;
namespace ariel{
 class YoungNinja : public Ninja {

    public:
        YoungNinja(string name, Point pos);

        ~YoungNinja();

        string print();
};
}


#include <iostream>
#include "library.cpp"

using namespace ns;

int main() {
    // print_number(perimeter_of_circle(10));

    struct Animal {
        std::string name;
        unsigned age;
        std::string species;

        Animal(std::string name, unsigned age, std::string species) 
        : name(name), age(age), species(species) {
        }
    };

    Animal tgre("John", 12, "Tiger");

    Animal collection[5] = {
        tgre,
        tgre,
        tgre,
        tgre,
        tgre
    };

    cout << collection[3].age << endl;
}

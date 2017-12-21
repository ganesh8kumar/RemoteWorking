#include <iostream>
#include "person.hpp"

using std::cout;
using std::endl;

int main()
{
    cout << "List of People:\n\n";

    Person p1("Jonlou", "Biron");
    cout << "\t" << p1.ToString() << endl;

    Person p2("John", "Cohen");
    cout << "\t" << p1.ToString() << endl;
	
    cout << endl;

    return 0;
}

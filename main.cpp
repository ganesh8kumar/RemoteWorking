#include <iostream>
#include "person.hpp"

using std::cout;
using std::endl;

int main()
{
    cout << "My Friends:\n\n";

    Person p1("Jonlou", "Biron");
    cout << "\t" << p1.ToString() << endl;

	Person p2("Rick", "Cohen");
    cout << "\t" << p1.ToString() << endl;
	
	Person p3("Wn", "Cn");
    cout << "\t" << p1.ToString() << endl;
    
	cout << endl;

    return 0;
}
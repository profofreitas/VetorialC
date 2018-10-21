#include <iostream>
using std::cout;
using std::endl;

#include "src/interfaces/Vector.h"

int main()
{
    Vector v(2.0, 3.0, 0.0);
    cout << "Coordenada x: " << v.getX() << endl;
    return 0;
}

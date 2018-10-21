#include <iostream>
using std::cout;
using std::endl;

#include "../interfaces/Vector.h"

Vector::Vector(double x_coord, double y_coord, double z_coord)
{
    coordinates[0] = x_coord;
    coordinates[1] = y_coord;
    coordinates[2] = z_coord;
}
void Vector::setX(double x_coord)
{
    coordinates[0] = x_coord;
}

double Vector::getX()
{
    return coordinates[0];
}

double Vector::getMagnitude()
{
    return 0.0;
}

Vector Vector::normalized()
{
    Vector v(1.0, 1.0, 0.0);
    return v;
}

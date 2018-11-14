/** Implementation of Vector.h
 *  
 */

/** @todo
 *  Implemente getMagnitude method;
 *  Implement normalized method;
 */
#include <cmath>
#include "../Interfaces/Vector.h"

/** Constructor Vector()
 * 
 *  @params double x_coord, double y_coord, double z_coord
 *  @return void
 */
Vector::Vector(double x_coord, double y_coord, double z_coord)
{
    setX(x_coord);
    setY(y_coord);
    setZ(z_coord);
}

/** setX() method
 * 
 *  @params double x_coord
 *  @return void
 */
void Vector::setX(double x_coord)
{
    coordinates[0] = x_coord;
}

double Vector::getX()
{
    return coordinates[0];
}

/** setY() method
 * 
 *  @params double y_coord
 *  @return void
 */
void Vector::setY(double y_coord)
{
    coordinates[1] = y_coord;
}

double Vector::getY()
{
    return coordinates[1];
}

/** setZ() method
 * 
 *  @params double Z_coord
 *  @return void
 */
void Vector::setZ(double y_coord)
{
    coordinates[2] = y_coord;
}

double Vector::getZ()
{
    return coordinates[2];
}

/** getMagnitude method
 * 
 *  @return double
 */
double Vector::getMagnitude()
{   
    return sqrt( pow(getX(), 2) + pow(getY(), 2) + pow(getZ(), 2) );
}

/** normalized method
 * 
 *  @return Vector
 */
Vector Vector::normalized()
{
    double magnitude = this->getMagnitude();
    
    double x = this->getX()/magnitude;
    double y = this->getY()/magnitude;
    double z = this->getZ()/magnitude;

    Vector v( x, y, z );
    
    return v;
}

<<<<<<< HEAD
#include <iostream>
using std::cout;
using std::endl;

#include "src/Interfaces/Vector.h"

int main()
{
    /** Tests
     *  
     **/

    /** createAVectorTest
     * 
     */
    Vector v(2.0, 3.0, 1.0);

    /** getXCoordinateTest
     * 
     */
    cout << "Coordenada x: " << v.getX() << "\n" << endl;

    /** getYCoordinateTest
     * 
     */
    cout << "Coordenada y: " << v.getY() << "\n" << endl;
    
    /** getZCoordinateTest
     * 
     */
    cout << "Coordenada z: " << v.getZ() << "\n" << endl;

    /** getMagnitudeTest
     * 
     */
    cout << "Magnitude of v: " << v.getMagnitude() << "\n" << endl;
    Vector u = v.normalized();
    cout << "Normalized u: " << u.getMagnitude() << endl;
    return 0;
}

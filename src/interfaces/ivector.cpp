
/**
 * Vector Interface
 * 
 * What does it really do?
 * 
 * @autor: prof.ofreitas@gmail.com
 */

class Vector { 
        public:
                /**
                 * Virtual Functions
                 * 
                 * @autor: prof.ofreitas@gmail.com
                 */
                virtual double getMagnitude() = 0;
                virtual Vector normalized() = 0;

        private:
                /**
                 * Private members 
                 */
                double coordinates[3];
                double magnitude;
}

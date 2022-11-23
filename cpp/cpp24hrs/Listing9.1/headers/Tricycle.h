#ifndef TRICYCLE_H_INCLUDED
#define TRICYCLE_H_INCLUDED

#include <iostream>

class Tricycle
{
    public:
        Tricycle(int initialSpeed);
        ~Tricycle();
        int getSpeed() const {return speed;}
        void setSpeed(int speed);
        void pedal()
        {
            setSpeed(speed +1);
            std::cout << "Pedaling " << getSpeed() << " mpg\n\n";
        }
        void brake()
        {
            setSpeed(speed -1);
            std::cout << "Pedaling " << getSpeed() << " mph\n\n";
        }
    private:
        int speed;
};

#endif // TRICYCLE_H_INCLUDED

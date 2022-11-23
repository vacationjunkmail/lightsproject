#include "headers/Tricycle.h"

//constructor for the object
Tricycle::Tricycle(int initialSpeed)
{
    setSpeed(initialSpeed);
}

//destrutor for the object
Tricycle::~Tricycle()
{
    //Do nothing

}

void Tricycle::setSpeed(int newSpeed)
{
    if(newSpeed >= 0)
    {
        speed = newSpeed;
    }
}

int main()
{
    Tricycle bog(5);
    for(int i =0; i<2; i++)
    {
        bog.pedal();
    }
    for(int i =0; i<3; i++)
    {
        bog.brake();
    }

    return 0;
}

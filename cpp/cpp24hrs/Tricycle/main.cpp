#include <iostream>

class Tricycle
{
    public:
        int getSpeed();
        void setSpeed(int speed);
        void pedal();
        void brake();
    private:
        int speed;
};

//set the tricycle speed
void Tricycle::setSpeed(int newSpeed)
{
    if(newSpeed >= 0)
    {
        speed = newSpeed;
    }
}

//get tricycle speed
int Tricycle::getSpeed()
{
    return speed;
}

//pedal the tricycle
void Tricycle::pedal(){
    setSpeed(speed + 1);
    std::cout << "\nPedaling the tricycle, speed is " << speed << " mph\n";
}

//brake the tricycle
void Tricycle::brake(){
    setSpeed(speed - 1);
    std::cout <<"\nBraking the tricycle, speed is "<< speed << " mph\n";
}

int main()
{
    int start = 1;
    int stop = 3;

    Tricycle witchita;
    witchita.setSpeed(0);
    for(int i = start; i < stop; i++){
        witchita.pedal();
    }

    for(int i = start; i < stop+2; i++){
        witchita.brake();
    }
    return 0;
}

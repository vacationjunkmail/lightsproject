#include <iostream>

class Tricycle
{
    public:
        Tricycle(int initialSpeed);
        ~Tricycle();
        void setSpeed(int setSpeed);
        int getSpeed();
        void brake();
        void pedal();
        int getWheelSize();
        void setWheelSize(int wheelSize);
    private:
        int speed;
        int wheelSize;
};

//Constructor
Tricycle::Tricycle(int initialSpeed){
    setSpeed(initialSpeed);
}

//Destructor
Tricycle::~Tricycle(){
    std::cout<<"Destructor Fired\n";
}

//Get Speed
int Tricycle::getSpeed(){
    return speed;
}

//Set Speed
void Tricycle::setSpeed(int newSpeed){
    if(newSpeed >=0){
        speed = newSpeed;
    }
}

//Pedal
void Tricycle::pedal(){
    setSpeed(speed+1);
    std::cout<<"\nSpeeding up to:"<< speed<<"\n";
}

//Braking
void Tricycle::brake(){
    setSpeed(speed-1);
    std::cout<<"\nSlowing speed to:"<< getSpeed()<< "\n";
}

int Tricycle::getWheelSize(){
    return wheelSize;
}

void Tricycle::setWheelSize(int newwheelSize){
    if(newwheelSize >=4){
        wheelSize = newwheelSize;
    }
}

int main()
{
    int s = 5;
    int stop = 2;
    Tricycle newTricycle(s);

    for(int i = 0; i<stop; i++){
        newTricycle.pedal();
    }

    for(int i = 0; i<(stop+1); i++){
        newTricycle.brake();
    }

    newTricycle.setWheelSize(3);
    std::cout<<"\nWheel Size:"<<newTricycle.getWheelSize()<< "\n";

    newTricycle.setWheelSize(5);
    std::cout<<"\nWheel Size:"<<newTricycle.getWheelSize()<< "\n";


    return 0;
}

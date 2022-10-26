#ifndef TRICYCLE_H
#define TRICYCLE_H


class Tricycle
{
    public:
        Tricycle();
        virtual ~Tricycle();

        int GetgetSpeed() { return getSpeed; }
        void SetgetSpeed(int val) { getSpeed = val; }

    protected:

    private:
        int getSpeed;
};

#endif // TRICYCLE_H

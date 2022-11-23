#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include <iostream>

class Point
{
    //no constructor using default.
    public:
        void setX(int newX) {x = newX;}
        void setY(int newY) {y = newY;}
        int getX() const {return x;}
        int getY() const {return y;}
    private:
        int x;
        int y;
};

class Rectangle
{

    public:
        Rectangle(int newTop, int newLeft, int newBottom, int newRight);
        ~Rectangle(){}

        int getTop() const {return top;}
        int getLeft() const {return left;}
        int getBottom() const {return bottom;}
        int getRight() const {return right;}

        Point getUpperLeft() const {return upperLeft;}
        Point getLowerLeft() const {return lowerLeft;}
        Point getUpperRight() const {return upperRight;}
        Point getLowerRight() const {return lowerLeft;}

        void setUpperLeft(Point Location);
        void setLowerLeft(Point Location);
        void setUpperRight(Point Location);
        void setLowerRight(Point Location);


        void setTop(int newTop);
        void setLeft(int newLeft);
        void setBottom(int newBottom);
        void setRight(int newRight);

        int getArea() const;

    private:
        Point upperLeft;
        Point upperRight;
        Point lowerLeft;
        Point lowerRight;

        int top;
        int left;
        int bottom;
        int right;

};

#endif // RECTANGLE_H_INCLUDED

#pragma once

class Point 
{
    int x;
    int y;

    public :
        static Point ORIGINE;

        Point();
        Point(int x, int y);
        int getX();
        void setX(int x);
        int getY();
        void setY(int y);
};
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
        int getY();
};
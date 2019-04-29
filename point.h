class Point
{
    private:
        int x,y;
    public:
        Point (int _x=0,int _y=0):x(_x),y(_y) {}
        int getX() {return x;}
        int geyY() {return y;}
        void setX(int _x) {x = _x;}
        void setY(int _y) {y = _y;}
};
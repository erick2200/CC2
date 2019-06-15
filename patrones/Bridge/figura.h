class Color;

class Figura
{
    protected:
        Color* color;
    public:
        Figura(Color* c):color(c){}
        virtual void draw() = 0;
};

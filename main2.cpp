#include <iostream>
class Vec2
{
public:
    float x ;
    float y ;
};
std::ostream& operator <<(std::ostream& s, const Vec2& v)
{
    s << v.x << ";" << v.y;
    return s;
}
class Shape
{
public:
    Shape(){}


};
class Circle : public Shape
{

public:
    Circle(const Vec2& center, const float& r) :  Shape(),v(center){}
    Vec2 v;
    void show()
    {
        
        std::cout << "you are a circle\n";
        std::cout << "ton centre est : ";
        std::cout << v;


    }
};
int main()
{
    Vec2 v;
    v.x = 2;
    v.y = 5;
    Circle(v, 10).show();
    return 0;
}

#include<iostream>
#include<string>


class Shape
{
public:

virtual void draw()
{

}

private:

};


class Circle : public Shape
{
void draw() override
{
    std::cout << "Drawing Circle" << std::endl;
}
};


class Square : public Shape
{
void draw() override
{
    std::cout << "Drawing Square" << std::endl;
}
};

class ShapePrinter
{
public:
void drawShape(Shape shape)
{
    shape.draw();
}
};
int main()
{
    return 0;
}
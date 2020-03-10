class Circle
{
public:
    explicit Circle(double radius) : m_radius(radius) {}
 
    double getRadius() const {return m_radius;}
 
private:
    double m_radius;
};
 
double getPerimeter(Circle const& circle) {return 2 * Pi * circle.getRadius();}
double getArea(Circle const& circle) {return Pi * circle.getRadius() * circle.getRadius();
}


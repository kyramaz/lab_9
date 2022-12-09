#pragma one

class Circle
{
private:
	double m_radius;
public:
	Circle(double radius);
	~Circle();
	double get_r();
	void set_r(double radius);
	void show_r();
	double square_of_circle();
};
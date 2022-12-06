#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
using namespace std;

class Circle
{
private:
	double m_radius;

public:
	Circle(double radius)
	{
		m_radius = radius;
	}

	double Square_of_Circle()
	{
		return (M_PI * pow(m_radius, 2));
	}
};

int main()
{
	int r;
	cin >> r;
	Circle one = Circle(r);
	cout << one.Square_of_Circle() << endl;
}
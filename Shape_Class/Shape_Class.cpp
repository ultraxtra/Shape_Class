#include<iostream>

using namespace std;

class Shapes {
public: 
	double a;
	double b;
	double p;
	double h;
	Shapes(double a, double b = 0)
	{
		this->a = a;
		this->b = b;
	}
	virtual void Formula() = 0;
	virtual ~Shapes() = default;
};

class Triangle : virtual public Shapes {
public:
	Triangle(double a, double b) : Shapes(a,b)
	{
		cout << a << " : " << b << endl;
	}
	void Formula() override {
		cout << "S triangle = 1/2 * a * b\n";
	}
	~Triangle() = default;
};

class Pryamokutnik : virtual public Shapes {
public:
	Pryamokutnik(double a, double b) : Shapes(a, b)
	{
		cout << a << " : " << b << endl;
	}
	void Formula() override {
		cout << "S pryamokutnik = a * b\n";
	}
	~Pryamokutnik() = default;
};

class Circle : virtual public Shapes {
public:
	Circle(double a, double b, double p  ) : Shapes(a, b)
	{
		cout << a << " : " << b << " : " << p << endl;
	}
	void Formula() override {
		cout << "S circle = p * r^2\n";
	}
	~Circle() = default;
};

class Trapecia : virtual public Shapes {
public:
	Trapecia(double a, double b, double h) : Shapes(a, b)
	{
		cout << a << " : " << b << " : "<<h << endl;
	}
	void Formula() override {
		cout << "S trapecia = (a+b) / 2 * h\n";
	}
	~Trapecia() = default;
};

int main() {
	Shapes* shp[4];
	
	shp[0] = new Triangle(2,3);
	shp[1] = new Pryamokutnik(5,6);
	shp[2] = new Circle(7, 8, 3.14);
	shp[3] = new Trapecia(5, 9, 12);
	for (auto item : shp)
	{
		item->Formula();
	}
	/*for (size_t i = 0; i < 1; i++)
	{
		shp[i]->Formula();
	}*/
}
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Color
{
public:
	string type;
	Color()
	{
		type = "Seray";
	}
	virtual string GetColor() = 0;
};
class Red : public Color
{
public:
	Red()
	{
		type = "Red";
	}
	string GetColor()
	{
		return type;
	}
};
class Blue : public Color
{
public:
	Blue()
	{
		type = "Blue";
	}
	string GetColor()
	{
		return type;
	}
};
class Green : public Color
{
public:
	Green()
	{
		type = "Green";
	}
	string GetColor()
	{
		return type;
	}
};

class Yellow : public Color
{
public:
	Yellow()
	{
		type = "Yellow";
	}
	string GetColor()
	{
		return type;
	}
};

class Black : public Color
{
public:
	Black()
	{
		type = "Black";
	}
	string GetColor()
	{
		return type;
	}
};
class Figura
{
public:
	double a;
	Color* c;
	virtual void Print() = 0;
	double GetA()
	{
		return a;
	}
};
class Kub:public Figura
{
public:
	Kub()
	{
		char l;
		cout << "Введите желаемый цвет (r-красный,g-зеленный,b-синий,y-желтый,l-черный)" << endl;
		cin >> l;
		switch (l)
		{
		case 'r':
		{
			c = new Red;
			break;
		}
		case 'g':
		{
			c = new Green;
			break;
		}
		case 'b':
		{
			c = new Blue;
			break;
		}
		case 'y':
		{
			c = new Yellow;
			break;
		}
		case 'l':
		{
			c = new Black;
			break;
		}
		default:
		{
			cout << "Вы ввели неверный цвет";
			break;
		}
		}
		cout << "Введите значение стороны"<<endl;
		cin >> a;	
	}
	void Print()
	{
		cout << "Куб со стороной: " << a<<endl;
		cout << "И цветом: " << c[0].GetColor() << endl;
		delete c;
	}
};
class Paralel :public Figura
{
	double b;
public:
	Paralel()
	{
		char l;
		cout << "Введите желаемый цвет (r-красный,g-зеленный,b-синий,y-желтый,l-черный)" << endl;
		cin >> l;
		switch (l)
		{
		case 'r':
		{
			c = new Red;
			break;
		}
		case 'g':
		{
			c = new Green;
			break;
		}
		case 'b':
		{
			c = new Blue;
			break;
		}
		case 'y':
		{
			c = new Yellow;
			break;
		}
		case 'l':
		{
			c = new Black;
			break;
		}
		default:
		{
			cout << "Вы ввели неверный цвет";
			break;
		}
		}
		cout << "Введите значение длинны" << endl;
		cin >> a;
		cout << "Введите значение ширины" << endl;
		cin >> b;
	}
	void Print()
	{
		cout << "Параллелограмм со сторонами:" << a <<" "<<b << endl;
		cout << "И цветом:" << c[0].GetColor() << endl;
		delete c;
	}
};
class Shar :public Figura
{
public:
	Shar()
	{
		char l;
		cout << "Введите желаемый цвет (r-красный,g-зеленный,b-синий,y-желтый,l-черный)" << endl;
		cin >> l;
		switch (l)
		{
		case 'r':
		{
			c = new Red;
			break;
		}
		case 'g':
		{
			c = new Green;
			break;
		}
		case 'b':
		{
			c = new Blue;
			break;
		}
		case 'y':
		{
			c = new Yellow;
			break;
		}
		case 'l':
		{
			c = new Black;
			break;
		}
		default:
		{
			cout << "Вы ввели неверный цвет";
			break;
		}
		}
		cout << "Введите значение радиуса" << endl;
		cin >> a;
	}
	void Print()
	{
		cout << "Шар с радиусом: " << a << endl;
		cout << "И цветом: " << c[0].GetColor() << endl;
		delete c;
	}
};

class Octayder :public Figura
{
	double b;
public:
	Octayder()
	{
		char l;
		cout << "Введите желаемый цвет (r-красный,g-зеленный,b-синий,y-желтый,l-черный)" << endl;
		cin >> l;
		switch (l)
		{
		case 'r':
		{
			c = new Red;
			break;
		}
		case 'g':
		{
			c = new Green;
			break;
		}
		case 'b':
		{
			c = new Blue;
			break;
		}
		case 'y':
		{
			c = new Yellow;
			break;
		}
		case 'l':
		{
			c = new Black;
			break;
		}
		default:
		{
			cout << "Вы ввели неверный цвет";
			break;
		}
		}
		cout << "Введите значение стороны" << endl;
		cin >> a;
		cout << "Введите значение ширину" << endl;
		cin >> b;
	}
	void Print()
	{
		cout << "Октайдер с стороной: " << a <<" и шириной "<< b << endl;
		cout << "И цветом: " << c[0].GetColor() << endl;
		delete c;
	}
};

class Tetrayder :public Figura
{
	double h;
public:
	Tetrayder()
	{
		char l;
		cout << "Введите желаемый цвет (r-красный,g-зеленный,b-синий,y-желтый,l-черный)" << endl;
		cin >> l;
		switch (l)
		{
		case 'r':
		{
			c = new Red;
			break;
		}
		case 'g':
		{
			c = new Green;
			break;
		}
		case 'b':
		{
			c = new Blue;
			break;
		}
		case 'y':
		{
			c = new Yellow;
			break;
		}
		case 'l':
		{
			c = new Black;
			break;
		}
		default:
		{
			cout << "Вы ввели неверный цвет";
			break;
		}
		}
		cout << "Введите значение стороны" << endl;
		cin >> a;
		cout << "Введите значение высоты" << endl;
		cin >> h;
	}
	void Print()
	{
		cout << "Октайдер с стороной: " << a << " и высотой " << h << endl;
		cout << "И цветом: " << c[0].GetColor() << endl;
		delete c;
	}
};


template<class T>
class Fraction
{
public:
	T numerator;
	T denumerator;
	//void Nod()
	//{
	//	T n = numerator;
	//	T d = denumerator;
	//	while (n != 0 && d != 0)
	//	{
	//		if (n > d)
	//		{
	//			n = fmod(d, n);
	//		}
	//		else
	//		{
	//			d = fmod(d, n);
	//		}
	//	}
	//	numerator = numerator / (n + d);
	//	denumerator = denumerator / (n + d);
	//}


	Fraction(T numerator = 0, T denumerator = 1)
	{
		this->numerator = numerator;
		if (denumerator != 0)
		{
			this->denumerator = denumerator;
		}
		else
			this->denumerator = 1;
	/*	if (this->numerator > 0)
		{
			Nod();
		}*/
	}
	void setdernumerator(T denumerator)
	{
		if (denumerator != 0)
		{
			this->denumerator = denumerator;
		}
		/*else
			this->denumerator = 1;
		Nod();*/
	}
	void setnumerator(T numerator)
	{
		this->numerator = numerator;
		/*Nod();*/
	}
	T getnumerator() { return numerator; }
	T getdernumerator() { return denumerator; }
	void print()
	{
		cout << numerator << "/" << denumerator << "\n";
	}

	static Fraction add(const Fraction& fodj1, const Fraction& fodj2)
	{
		return Fraction(fodj1.numerator * fodj2.denumerator + fodj2.numerator * fodj1.denumerator, fodj1.denumerator * fodj2.denumerator);
	}

	static Fraction sub(const Fraction& fodj1, const Fraction& fodj2)
	{
		return Fraction((fodj1.numerator * fodj2.denumerator) - (fodj2.numerator * fodj1.denumerator), fodj1.denumerator * fodj2.denumerator);
	}

	static Fraction mult(const Fraction& fodj1, const Fraction& fodj2)
	{
		return Fraction(fodj1.numerator * fodj2.numerator, fodj1.denumerator * fodj2.denumerator);
	}

	static Fraction div(const Fraction& fodj1, const Fraction& fodj2)
	{
		return Fraction(fodj1.numerator * fodj2.denumerator, fodj2.numerator * fodj1.denumerator);
	}

	static bool ravni(const Fraction& fodj1, const Fraction& fodj2)
	{
		if ((fodj1.denumerator * fodj2.denumerator) == (fodj1.numerator * fodj2.numerator))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	static bool bolse(const Fraction& fodj1, const Fraction& fodj2)
	{
		if ((fodj1.denumerator * fodj2.denumerator) > (fodj1.numerator * fodj2.numerator))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	static bool menche(const Fraction& fodj1, const Fraction& fodj2)
	{
		if ((fodj1.denumerator * fodj2.denumerator) < (fodj1.numerator * fodj2.numerator))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	static bool bolseiliravni(const Fraction& fodj1, const Fraction& fodj2)
	{
		if ((fodj1.denumerator * fodj2.denumerator) >= (fodj1.numerator * fodj2.numerator))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	static bool mencheiliravni(const Fraction& fodj1, const Fraction& fodj2)
	{
		if ((fodj1.denumerator * fodj2.denumerator) <= (fodj1.numerator * fodj2.numerator))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	static Fraction plusplus(Fraction& fodj1)
	{
		fodj1.numerator = fodj1.numerator + fodj1.denumerator;
		return fodj1;
	}

	static Fraction minysminys(Fraction& fodj1)
	{
		fodj1.numerator = fodj1.numerator - fodj1.denumerator;
		return fodj1;
	}

	static Fraction pow(Fraction& fodj1)
	{
		return fodj1 * fodj1;
	}

	static Fraction sqrt1(Fraction& fodj1)
	{
		return Fraction(sqrt(fodj1.numerator), sqrt(fodj1.denumerator));
	}


	static Fraction Ne(Fraction& fodj1)
	{
		if (fodj1.numerator > 0)
		{
			return Fraction(fodj1.denumerator, fodj1.numerator);
		}
		else
		{
			return Fraction(fodj1.numerator, fodj1.denumerator);
		}
	}


	friend Fraction operator+(const Fraction& fraction1, const Fraction& fraction2)
	{
		return add(fraction1, fraction2);
	}

	friend Fraction operator-(const Fraction& fraction1, const Fraction& fraction2)
	{
		return sub(fraction1, fraction2);
	}

	friend Fraction operator*(const Fraction& fraction1, const Fraction& fraction2)
	{
		return mult(fraction1, fraction2);
	}

	friend Fraction operator/(const Fraction& fraction1, const Fraction& fraction2)
	{
		return div(fraction1, fraction2);
	}

	friend ostream& operator<<(ostream& output, const Fraction& fraction1)
	{
		output << fraction1.numerator << "/" << fraction1.denumerator;
		return output;
	}
	friend istream& operator>> (std::istream& in, Fraction& fraction1)
	{
		in >> fraction1.numerator;
		in >> fraction1.denumerator;
		return in;
	}
	friend bool operator== (const Fraction& fraction1, const Fraction& fraction2)
	{
		return ravni(fraction1, fraction2);
	}

	friend bool operator> (const Fraction& fraction1, const Fraction& fraction2)
	{
		return bolse(fraction1, fraction2);
	}

	friend bool operator< (const Fraction& fraction1, const Fraction& fraction2)
	{
		return menche(fraction1, fraction2);
	}

	friend bool operator>= (const Fraction& fraction1, const Fraction& fraction2)
	{
		return bolseiliravni(fraction1, fraction2);
	}

	friend bool operator<= (const Fraction& fraction1, const Fraction& fraction2)
	{
		return mencheiliravni(fraction1, fraction2);
	}

	friend Fraction operator++ (Fraction& fraction1)
	{
		return plusplus(fraction1);
	}

	friend Fraction operator-- (Fraction& fraction1)
	{
		return minysminys(fraction1);
	}

	friend Fraction pow1(Fraction& fraction1)
	{
		return pow(fraction1);
	}

	friend Fraction sqrt1(Fraction& fraction1)
	{
		return sqrt1(fraction1);
	}

	friend Fraction operator!(Fraction& fraction1)
	{
		return Ne(fraction1);
	}



};

class Adapter
{
	Fraction<int> drob{};
	double value;
public:
	Adapter(Fraction<int> drob1)
	{
		drob = drob1;

	}
	Adapter(double v)
	{
		value = v;

	}
	double GetDouble()
	{
		/*int d=10/ drob.denumerator;*/
		return /*(double)(drob.numerator * d) / 10*/(double)drob.numerator/drob.denumerator;
	}
	Fraction<int> GetDrob()
	{
		drob.numerator = value * 10;
		drob.denumerator = 10;
		return drob;
	}

};
void main()
{
	setlocale(0, "rus");


	/*Kub k;
	k.Print();

	Shar s;
	s.Print();*/

	Fraction<int> drob(6,7);
	Adapter t(drob);
	double u;
	u=t.GetDouble();
	cout << u<<endl;
	Adapter t1(u);
	cout << t1.GetDrob();
}
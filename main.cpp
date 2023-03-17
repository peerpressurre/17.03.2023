#include <iostream>
#include <string>

using namespace std;

struct Boiler
{
private:
	string brand;
	string color;
	float size;
	float maxTemp;
	float power;

public:
	//setters
	void setBrand(string brand)
	{
		(brand.empty()) ? this->brand = "NULL" : this->brand = brand;
	}
	void setColor(string color)
	{
		(color.empty()) ? this->color = "NULL" : this->color = color;
	}
	void setsize(float size)
	{
		(size == 0) ? this->size = 0 : this->size = size;
	}
	void setmaxTemp(float maxTemp)
	{
		(maxTemp == 0) ? this->maxTemp = 0 : this->maxTemp = maxTemp;
	}
	void setpower(float power)
	{
		(power == 0) ? this->power = 0 : this->power = power;
	}


	//getters
	string getBrand()
	{
		return brand;
	}
	string getColor()
	{
		return color;
	}
	float getsize()
	{
		return size;
	}
	float getmaxTemp()
	{
		return maxTemp;
	}
	float getpower()
	{
		return power;
	}


	//constructors
	Boiler()
	{
		setBrand("");
		setColor("");
		setsize(0);
		setmaxTemp(0);
		setpower(0);
	}
	Boiler(string brand, string color, float size, float maxTemp, float power)
	{
		setBrand(brand);
		setColor(color);
		setsize(size);
		setmaxTemp(maxTemp);
		setpower(power);
	}

	//destructor
	~Boiler()
	{
		this->brand.clear();
		this->color.clear();
		this->size = 0;
		this->maxTemp = 0;
		this->power = 0;
	}

	void about()
	{
		cout << "Brand: " << brand << endl;
		cout << "Color: " << color << endl;
		cout << "Size: " << size << " l" << endl;
		cout << "Max Temperature: " << maxTemp << "C°" << endl;
		cout << "Power: " << power << endl;
	}
};

int main()
{
	string brand, color;
	float size, maxTemp, power;
	cout << "Enter Brand: " << endl;
	getline(cin, brand);
	cout << "Enter Color: " << endl;
	getline(cin, color);
	cout << "Enter size in l: " << endl;
	cin >> size;
	cout << "Enter max temperature in cm: " << endl;
	cin >> maxTemp;
	cout << "Enter Power in cm: " << endl;
	cin >> power;

	Boiler* boiler = new Boiler(brand, color, size, maxTemp, power);
	boiler->about();
	return 0;
}
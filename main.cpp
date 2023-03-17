#include <iostream>
#include <string>

using namespace std;

struct IroningMachine
{
private:
	string brand;
	string color;
	float minTemp;
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
	void setminTemp(float minTemp)
	{
		(minTemp == 0) ? this->minTemp = 0 : this->minTemp = minTemp;
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
	float getminTemp()
	{
		return minTemp;
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
	IroningMachine()
	{
		setBrand("");
		setColor("");
		setminTemp(0);
		setmaxTemp(0);
		setpower(0);
	}
	IroningMachine(string brand, string color, float minTemp, float maxTemp, float power)
	{
		setBrand(brand);
		setColor(color);
		setminTemp(minTemp);
		setmaxTemp(maxTemp);
		setpower(power);
	}

	//destructor
	~IroningMachine()
	{
		this->brand.clear();
		this->color.clear();
		this->minTemp = 0;
		this->maxTemp = 0;
		this->power = 0;
	}

	void about()
	{
		cout << "Brand: " << brand << endl;
		cout << "Color: " << color << endl;
		cout << "Min Temperature: " << minTemp << "C°" << endl;
		cout << "Max Temperature: " << maxTemp << "C°" << endl;
		cout << "Power: " << power << endl;
	}
};

int main()
{
	string brand, color;
	float minTemp, maxTemp, power;
	cout << "Enter Brand: " << endl;
	getline(cin, brand);
	cout << "Enter Color: " << endl;
	getline(cin, color);
	cout << "Enter min temperature in cm: " << endl;
	cin >> minTemp;
	cout << "Enter max temperature in cm: " << endl;
	cin >> maxTemp;
	cout << "Enter Power in cm: " << endl;
	cin >> power;
	
	IroningMachine* ironing_machine = new IroningMachine(brand, color, minTemp, maxTemp, power);
	ironing_machine->about();
	return 0;
}
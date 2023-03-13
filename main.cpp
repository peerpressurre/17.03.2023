#include <iostream>
#include <string>

using namespace std;

struct WashingMachine
{
private:
	string brand;
	string color;
	float width;
	float length;
	float height;
	int maxSpeed;

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
	void setWidth(float width)
	{
		(width == 0) ? this->width = 0 : this->width = width;
	}
	void setLength(float length)
	{
		(length == 0) ? this->length = 0 : this->length = length;
	}
	void setHeight(float height)
	{
		(height == 0) ? this->height = 0 : this->height = height;
	}
	void setMaxSpeed(int maxSpeed)
	{
		(maxSpeed == 0) ? this->maxSpeed = 0 : this->maxSpeed = maxSpeed;
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
	float getWidth()
	{
		return width;
	}
	float getLength()
	{
		return length;
	}
	float getHeight()
	{
		return height;
	}
	int getMaxSpeed()
	{
		return maxSpeed;
	}

	//constructors
	WashingMachine()
	{
		setBrand("");
		setColor("");
		setWidth(0);
		setLength(0);
		setHeight(0);
		setMaxSpeed(0);
	}
	WashingMachine(string brand, string color, float width, float length, float height, int maxSpeed)
	{
		setBrand(brand);
		setColor(color);
		setWidth(width);
		setLength(length);
		setHeight(height);
		setMaxSpeed(maxSpeed);
	}

	//destructor
	~WashingMachine()
	{
		this->brand.clear();
		this->color.clear();
		this->width = 0;
		this->length = 0;
		this->height = 0;
		this->maxSpeed = 0;
	}

	void about()
	{
		cout << "Brand: " << brand << endl;
		cout << "Color: " << color << endl;
		cout << "Width: " << width << " cm" << endl;
		cout << "Length: " << length << " cm" << endl;
		cout << "Height: " << height << " cm" << endl;
		cout << "Max Speed: " << maxSpeed << " rpm" << endl;
	}
};

int main()
{
	string brand, color;
	float width, length, height;
	int maxSpeed;
	cout << "Enter Brand: " << endl;
	getline(cin, brand);
	cout << "Enter Color: " << endl;
	getline(cin, color);
	cout << "Enter Width in cm: " << endl;
	cin >> width;
	cout << "Enter Length in cm: " << endl;
	cin >> length;
	cout << "Enter Height in cm: " << endl;
	cin >> height;
	cout << "Enter Max Speed: " << endl;
	cin >> maxSpeed;
	WashingMachine* washing_machine = new WashingMachine(brand, color, width, length, height, maxSpeed);
	washing_machine->about();
	return 0;
}
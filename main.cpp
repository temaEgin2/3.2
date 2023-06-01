#include <iostream>
#include <fstream>
class Road {
	public:
		double length;
		int width;
		Road();
		Road(double newLength, int newWidth);
};
Road::Road(){
	length = 0.0;
	width = 0;
}

Road::Road(double newLength, int newWidth){
	length = newLength;
	width = newWidth;
}

int main() {
	using namespace std;
	cout << "Test v2.01: OK" << endl;

	Road road;
	Road road1(550, 4);
	Road *road2 = new Road(900, 6);

	road.length;
	road.width;
	ifstream fIn;
	fIn.open("qwe.txt");

	cout << "road.length: " << road.length << endl;
	cout << "road.width: " << road.width << endl;

	cout << "Consttructor with parametrs:\n";

	cout << "road1.length: " << road1.length << endl;
	cout << "road1.width: " << road1.width << endl;

	cout << "road2.length: " << ( *road2).length << endl;
	cout << "road2.width: " << road2->width << endl;
	
	fIn >> road.length;
	cout << "Parametr length file: " << road.length << endl;
	fIn >> road.width;
	cout << "Parametr width file: " << road.width << endl;
	fIn.close ();
	return 0;
}

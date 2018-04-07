#include<iostream>
#include<cmath> 
using namespace std;

void simon(int);
int stonetolb(int);
int main()
{
	double area;
	cout << "Enter the floor area, in square feet, of your home: ";
	cin >> area;
	double side;
	side = sqrt(area);
	cout << "That's the equivalent of a square " << side
		 << " feet to the side." << endl;
	cout << "How fascinating!" << endl;
	
	simon(3);
	
	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;
	int pounds = stonetolb(stone);
	cout << stone << " stone = ";
	cout << pounds << " pounds." << endl;
	return 0;
}


//无返回值 
void simon(int n)
{
	cout << "Simon says touch your toes " << n << " times." << endl;	
} 

//有返回值的函数 
int stonetolb(int sts)
{
	return 14 * sts;
}

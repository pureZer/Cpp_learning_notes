#include<iostream>
using namespace std;

int main()
{
	float hats, heads;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Enter a number: ";
	cin >> hats;
	cout << "Enter another number: ";
	cin >> heads;
	
	cout << "hats = " << hats << "; heads = " << heads << endl;
	cout << "hats + heads = " << hats + heads << endl;
	cout << "hats - heads = " << hats - heads << endl;
	cout << "hats * heads = " << hats * heads << endl;
	cout << "hats / heads = " << hats / heads << endl << endl; 
	
	cout << "Ingeter division: 9/5 = " << 9 / 5 << endl;
	cout << "Floating-point division: 9.0/5.0 = ";
	cout << 9.0 / 5.0 << endl;
	cout << "Mixed division: 9.0/5 = " << 9.0 / 5 << endl;
	cout << "double constants: 1e7/9.0 = ";
	cout << 1.e7 / 9.0 << endl;
	cout << "float constants: 1e7f/9.0f = ";
	cout << 1.e7f / 9.0f << endl << endl;
	
	const int Lbs_stn = 14;
	int lbs;
	cout << "Enter your weight in pounds: ";
	cin >> lbs;
	int stone = lbs / Lbs_stn;
	int pounds = lbs % Lbs_stn;
	cout << lbs << " pounds are " << stone << " stone, " << pounds << " pounds(s)" << endl << endl;
	
	float tree = 3;
	int guess(3.9832);
	int debt = 7.2E12;
	cout << "tree = " << tree << endl;
	cout << "guess = " << guess << endl;
	cout << "debt = " << debt << endl;
	return 0;
}

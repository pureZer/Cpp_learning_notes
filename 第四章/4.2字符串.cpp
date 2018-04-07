#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char bird[11] = "Mr. Cheeps";
	char fish[] = "Bubbles";
	
	cout << "I'd give my right arm to be" " a great violinist.\n";
	cout << "I'd give my right arm to be a great violinist.\n";
	cout << "I'd give my right ar"
	"m to be a great violinist.\n\n";
	
	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++owboy";
	cout << "Howdy! I'm " << name2;
	cout << "! What's your name?\n";
	cin >> name1;
	cout << strlen(name1) << " letters and is stored\n";
	cout << "in an array of " << sizeof(name1) << " bytes.\n";
	cout << "Your initial is " << name1[0] << ".\n";
	name2[3] = '\0';
	cout << "Here are the first 3 characters of my name: ";
	cout << name2 << endl << endl; 
	
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	cout << "Enter your name:\n";
	cin >> name;
	cout << "Enter your favorite dessert.\n";
	cin >> dessert;
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n\n";
	cin.get();
	
	cout << "Enter your name:\n";
	cin.getline(name, ArSize);
	cout << "Enter your favorite dessert.\n";
	cin.getline(dessert, ArSize);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n\n";

	cout << "Enter your name:\n";
	cin.get(name, ArSize).get();
	cout << "Enter your favorite dessert.\n";
	cin.get(dessert, ArSize).get();
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n\n";
	return 0; 
}

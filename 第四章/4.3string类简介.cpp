#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
	string str1, str2 = "panther";
	
	cout << "Enter kind of feline: ";
	cin >> str1;
	cout << "Here are some felines:\n";
	cout << str1 << " " << str2 << endl;
	cout << "The third letter in " << str2 << " is " << str2[2] << endl << endl;
	
	string s1 = "penguin";
	string s2, s3;
	cout << "You can assign one string object to another: s2 = s1\n";
	s2 = s1;
	cout << "11: " << s1 << ", s2: " << s2 << endl;
	cout << "You can assign a C-style string to a string object.\n";
	cout << "s2 = \"buzzard\"\n";
	s2 = "buzzard";
	cout << "s2:" << s2 << endl;
	cout << "You can concatenate string: s3 = s1 + s2\n";
	s3 = s1 + s2;
	cout << "s1 += s2 yields s1 = " << s1 << endl;
	s2 += " for a day";
	cout << "s2 += \" for a day\" yields s2 = " << s2 << endl << endl;
	cin.get();
	
	char charr[20];
	string str;
	cout << "Length of string in charr before input: "
		 << strlen(charr) << endl;
	cout << "Length of string in str before input: "
		 << str.size() << endl;
	cout << "Enter a line of text:\n";
	cin.getline(charr, 20);
	cout << "You entered: " << charr << endl;
	cout << "Length of string in charr after input: "
		 << strlen(charr) << endl;
	cout << "Enter another line of text:\n";
	getline(cin, str);
	cout << "You entered: " << str << endl;
	cout << "Length of string in str after input: "
		 << str.size() << endl;
	return 0;
}

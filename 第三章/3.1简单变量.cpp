#include<iostream>
#include<climits>
#define ZERO 0;
using namespace std;

int main()
{
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;
	
	//sizeof operator yields size of type or of variable
	cout << "int is" << sizeof(int) << " bytes." << endl; 
	cout << "short is" << sizeof n_short << " bytes." << endl;
	cout << "long is" << sizeof n_long << " bytes." << endl;
	cout << "long long is" << sizeof n_llong << " bytes." << endl;
	cout << endl;
	
	cout << "Maximum values:" << endl;
	cout << "int: " << n_int << endl;
	cout << "short: " << n_short << endl;
	cout << "long: " << n_long << endl;
	cout << "long long: " << n_llong << endl << endl;
	
	cout << "Minimum int value = " << INT_MIN << endl;
	cout << "Bits per byte = " << CHAR_BIT << endl;
	
	
	short sam = SHRT_MAX;
	unsigned short sue = sam;
	
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl
	     << "Add $1 to each account." << endl << "Now ";
	sam = sam + 1;
	sue = sue + 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited.\nPoor Sam!" << endl;
	
	sam = ZERO;
	sue = ZERO;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl;
	cout << "Take $1 from each account." << endl << "Now ";
	sam = sam - 1;
	sue = sue - 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl << "Lucky Sue!" << endl<<endl;
	
	int chest = 42;
	int waist = 0x42;
	int inseam = 042;
	cout << "Monsieur cuts a striking figure!\n";
	cout << "chest = " << chest << " (42 int decimal)\n";
	cout << "waist = " << waist << " (0x42 int hex)\n";
	cout << "inseam = " << inseam << " (042 in toctal)\n\n";
	
	chest = 42;
	waist = 42;
	inseam = 42;
	cout << "Monsieur cuts a striking figure!" << endl;
	cout << "chest = " << chest << " (decimal for 42)" << endl;
	cout << hex;
	cout << "waist = " << waist << " (hex for 42)" << endl;
	cout << oct;
	cout << "inseam = " << inseam << " (octal for 42)" << endl << endl;
	
	char ch = 'M';
	int i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;
	
	cout << "Add one to the character code:" << endl;
	ch = ch + 1;
	i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;
	
	cout << "Displaying char ch using cout.put(ch): ";
	cout.put(ch);
	
	cout.put('!');
	cout << endl << "Done" << endl; 
	return 0;
} 

#include <iostream>
#include <conio.h>

using namespace std;

int main()

{ 
int hours;
char a;
cout << " ENTER PACKAGE LETTER ONLY!!! " << endl;
cout << endl;
cout << " PACKAGE: ";
 cin >> a;
 cout << endl;
 cout << endl; 
 


switch (a)
{
	case 'A':
	case 'a':
		cout << " You purchased PACKAGE A " << endl;
		cout << endl;
		cout << " Enter the number of hours used : ";
		cin >> hours; 
		cout << endl;
		
		if ( hours < 10 )
		cout << " Total Bill : PHP 995.00 " << endl;
		
		else 
		cout << " Total Bill : " << 995 +  (hours - 10 )*20 << endl; 
		break;
		
	case 'B':
	case 'b':
		cout << " You purchased PACKAGE B " << endl;
		cout << endl;
		cout << " Enter the number of hours used : ";
		 cin >> hours;
		 cout << endl;
		
		if ( hours < 20 )
		cout << " Total Bill : PHP 1495.00 " << endl;
		
		else 
		cout << " Total Bill : " << 1495 + ( hours - 20 )*10 << endl;
		break;
		
		
	case 'C':
	case 'c':
		cout << " You purchase PACKAGE C " << endl;
		cout << " Total Bill : PHP 1995.00 " << endl; 
		break;
		
		
}
getch();
return 0;

}

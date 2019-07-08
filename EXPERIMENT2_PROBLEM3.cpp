#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main()

{ 
double y, sqrt1, abs1;
long v;
int x;
const double z = 2.5;

cout << "Enter 2 numbers : " << endl;

cout << "x : "; cin >> x;
cout << "y : "; cin >> y;

switch (x)
{ 
case 1:
{
	cout << fixed << showpoint << setprecision(2) << setw(10);
	if ( y > 1 && y < 5 )
	{
	cout << "v = " << x * y * z << endl;
	break;
	}
	else if ( y >= 5)
	{
	cout << "v = " << x + ( y / z ) << endl;
	break;
	}
}
break;

case 2: 
{
	cout << fixed << showpoint << setprecision(2) << setw(10);
	if ( y <= 5 )
	{
	abs1 = (x-y)/z;
     	cout << " v = " << abs(abs1) << endl; 
     	break;
	}
   	else if ( y > 5 )
   	{
	sqrt1 = y+z;
    cout << " v = " << x - sqrt(sqrt1) << endl;
    break;
	}
	break;
 }
     	cout << fixed << showpoint << setprecision(2) << setw(10);
	default: 
	cout << " v = " << x + y + z << endl;

     
}

 

 getch();
 return 0;
   
     
}

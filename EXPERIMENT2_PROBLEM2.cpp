#include <iostream>
#include <conio.h>

using namespace std;

int main()

{ 
double x, y, z;
z = 35; 

cout << " WATER BILL " << endl;
cout << endl;

cout << " Enter GALLON used: "; cin >> x;
cout << endl;

cout << " Enter UNPAID BALANCE : "; cin >> y;
cout << endl;


if ( y > 0 )
cout << " Total Bill : " << z + 20 + y + (1.10 * x ) << endl; 

else 
cout << " Total Bill : " << z + (1.10 * x ) << endl; 

getch();
return 0;


}

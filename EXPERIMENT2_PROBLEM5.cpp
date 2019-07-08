#include <iostream>
#include <conio.h>

using namespace std;

int main()

{ 
 
int fibo, num1, num2, temp, i;
num1 = 0;
num2 = 1; 

cout << " Number of Fibo Terms: "; 
cin >> fibo;


for ( i = 0; i < fibo; i++ )
{
	if ( i == 0 )
	{
		cout << num1 << " " << num2 << " ";
			}
	else 
	{
		temp = num1 + num2;
		num1 = num2;
		num2 = temp;
		cout << temp << " ";
	}
}

getch();
return 0;

 
}

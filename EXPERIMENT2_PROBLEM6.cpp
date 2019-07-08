#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	bool p = false;
	do
	{	
		int a, b, i;
		b = 0;
		
		cout << "\nEnter a number: ";
		cin >> a;

		if (a == 0)
		{
			cout << "Thank You." << endl;
			break;
		}

		else
		{
			for (i = 1; i <= a; i++)
			{
				b += i;
			}
			cout << "Sum of whole numbers from 1 to " << a << " is " << b << endl;
			continue;
		}
	} while (!p);
	
getch ();
return 0;
}

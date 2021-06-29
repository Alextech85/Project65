#include <iostream>
#include <exception>

using namespace std;

double mySqrt(double x)
{
	if (x < 0)
		throw exception("Can't tale sqrt of negative number");
	return sqrt(x);
}

int main()
{
	try
	{
		//cout << mySqrt(-5);
		int x;
		cin >> x;
		/*if(x<0)
			throw "Can't tale sqrt of negative number\n";*/
		cout << mySqrt(x) << "\n";
	}

	catch (exception exc)
	{
		cout << "Error " << exc.what();
	}
	catch (int errorcode)
	{
		cout << "Error";
	}
	
	cout << "Programm is continue";

	return 0;
}
#include<iostream>
using namespace std;

int main( )
{
	int n;
	std::cin >> n;
	std::cout << n << " ";
	while ( n!=1 )
	{	
		if ( n%2 == 1)
			n = 3*n + 1;
		else
			n = n/2;
		cout << n << " ";
	}
	cout << endl;
	return 0;
}

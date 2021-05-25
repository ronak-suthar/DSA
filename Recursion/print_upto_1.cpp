#include <iostream>
//To print upto 1
//5 4 3 2 1
using namespace std;

void print(int n)
{ //required function
	if (n == 0)
	{
		return;
	}
	cout << n << " ";
	print(n - 1);
}
int main(void)
{
	print(10);
	cout << endl;
	return 0;
}

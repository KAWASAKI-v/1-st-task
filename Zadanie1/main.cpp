#include <iostream>

using namespace std;
int Sum(int a, int b)
{
	return a+b;
}

int main()

{
	int z;	
	int x;	
	cout<< "2 num separate by enter"<<endl;
	cin >>z;
	cin >>x;
    cout<<"Summ = "<<Sum(z,x)<<endl;
	return 0;
	
}

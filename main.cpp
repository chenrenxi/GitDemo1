#include <iostream>

using namespace std;


#include "Dog.h"

int add1(int a, int b)
{
	return a+b;
}

int multiply(int a, int b)
{
	return a*b;
}

int div(int a, int b)
{
	return a/b;
}

//add by chenrenxi branch2
int pow(int a, int b)
{
	return 0;
}

//add by chenrenxi branch2
int circle(int x, int y, int r)
{

}

//add by chenrenxi
float du()
{
	
}

//this is a demo of github
//cloned from the main
int main()
{
    cout << "Hello world!" << endl;

    int a = 1;
    int b = 2;
    int c = a + b;
    cout << "c="<<c<<endl;

	Dog d1, d2;
	d1.bark();
	d2.bark();
	
	int d = add1(a, b);
	int f = multiply(a, b);

    cout<<"finished!"<<endl;

    return 0;
}

//this a branch1

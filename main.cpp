#include <iostream>

using namespace std;


#include "Dog.h"

// function1
int add(int a, int b)
{
	return a+b;
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

    cout<<"finished!"<<endl;

    return 0;
}

//this a branch1

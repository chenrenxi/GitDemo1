#include <iostream>

using namespace std;

#include "Dog.h"

int main()
{
    cout << "Hello world!" << endl;

    int a = 1;
    int b = 2;
    int c = a + b;
    cout << "c="<<c<<endl;

	Dog d1;
	d1.bark();

    cout<<"finished!"<<endl;

    return 0;
}

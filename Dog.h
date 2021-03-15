#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>
using namespace std;

class Dog
{
    public:
        Dog();
        virtual ~Dog();
        string getName();
		void setName(string sname);
        void bark();

    protected:
        string name;
        int color;
		int birthday;
    private:
    
};

#endif // DOG_H

#include "Dog.h"

Dog::Dog()
{
    //ctor
    name = "A Fu";
    color = 6;
}

Dog::~Dog()
{
    //dtor
}

string Dog::getName()
{
    return name;
}

void Dog::setName(string sname)
{
    name = sname;
}

void Dog::bark()
{

    cout<<"I am "<<name<<endl;
}

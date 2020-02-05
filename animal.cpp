#include<iostream>
#include"animal.h"
#include<string>
using namespace std;

animal::animal()
{
animalname="";
}
animal::animal(string s)
{
animalname=s;
}

animal::~animal()
{

}

void animal::print()
{
    cout<<"name of animal is: "<<animalname<<endl;
}


dog::dog():animal()
{
    dogname = "";
}
dog::dog(string s,string dog):animal(s)
{
this->dogname=dog;

}
dog::~dog()
{

}
void dog::print()
{
    cout<<"name of animal is: "<<animalname<<endl;
    cout<<"name of dog is: "<<dogname<<endl;
}

cat::cat(string s,string cat):animal(s)
{
    this->catname=cat;
}


cat::~cat()
{

}
void cat::print()
{
    cout<<"this cats name is: "<<catname<<endl;
}

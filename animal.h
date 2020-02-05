#include<string>
#include<iostream>
using namespace std;

class animal
{
    public:
        animal();
        animal(string s);
        ~animal();
        virtual void print();//this is needed for dynamic bynding, with out it compiler will only run what parts print function shows. so it would read, name of animal is: medium, when put vurtual it reads your cats name is : max

    protected:
        string animalname;
};

class dog:public animal
{
    public:
        dog();
        dog(string s, string dog);
        ~dog();
        void print();
    protected:
        string dogname;
};

class cat:public animal
{
    public:
        cat(string s,string cat);
        ~cat();
        void print();
    protected:
        string catname;
};

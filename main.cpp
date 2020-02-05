#include<iostream>
#include<string>
#include"animal.h"

void callprint (animal &obj) {
    obj.print();
}//must pass the base class, CAN NOT pass by dog or cat

int main()
{
animal type ("big");
dog style("small","great dane");

cat one("medium","max");

type.print();
style.print();
cout << "Testing Dynamic binding!!! "<< endl;
callprint(type);
callprint(style);

callprint(one);


    return 0;
}

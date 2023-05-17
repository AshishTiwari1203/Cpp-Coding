/*#include <iostream>
#include <math.h>
using namespace std;

class human
{
public:
    int height;
    int height;

private:
    int age;

public:
    int getage()
    {
        return this->age;
    }
};

class male : public human
{

public:
    string color;

    void sleep()
    {
        cout << "Male is sleeping" << endl;
    }
    void print()
    {
        cout << this->height << endl;
        cout << getage() << endl;
    }
};



int main()
{
    male object1;

//Ambiguity with function

        return 0;
}*/
#include <iostream>
using namespace std;

class Human
{

public:
    int height;

public:
    int weight;

private:
    int age;

public:
    int getAge()
    {
        return this->age;
    }

    void setWeight(int w)
    {
        this->weight = w;
    }
};

class Male : private Human
{

public:
    string color;

    void sleep()
    {
        cout << "Male Sleeping" << endl;
    }

    int getHeight()
    {
        return this->height;
    }
};

int main()
{

    Male m1;
    // cout << m1.height << endl;

    /*
        Male object1;
        cout << object1.age << endl;
        cout << object1.weight << endl;
        cout << object1.height << endl;

        cout << object1.color << endl;

        object1.setWeight(84);
        cout << object1.weight << endl;
        object1.sleep();
        */

    return 0;
}
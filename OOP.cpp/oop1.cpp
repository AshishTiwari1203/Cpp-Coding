#include <iostream>
// #include "classhero.cpp"
#include <math.h>
using namespace std;

// So class is a type of user defined DATA-TYPE, just like the int, char etc...

// U can define your type of data-type like: class tiwari{
//    int roll;  char* name= new char[100] ;  };
class hero
{

    // Properties
    // Private is only accessible in the class
private:
    char name[100];
    int health;

    // accessible everywhere
public:
    char level;
    static int timetocomplete; // Static member created

    hero()
    {
        cout << "Apun Constructor hai re baaba" << endl;
    }
    hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    char getname()
    {
        return *name;
    }

    void setname(char n[])
    {
        // strcpy(this->name, n);
    }
    int gethealth()
    {
        return health;
    }
    int sethealth(int h)
    {
        health = h;
    }
    ~hero()
    {
        cout << "Destructor bhau call hogaye...." << endl;
    }
};

int hero::timetocomplete = 8;

int main()
{
    // Object creation
    hero king; // static allocation
    king.level = 'B';
    king.sethealth(23);

    cout << "The size of the class is: " << sizeof(king) << endl;
    cout << "The king level and health: " << king.level << " " << king.gethealth() << endl;

    // Dynamic allocation
    hero *paul = new hero; // Meaning: hero type ka ek memory in heap and it is pointed by pointer paul
    (*paul).level = 'A+';
    (*paul).sethealth(54);
    cout << "Dynamic level: " << (*paul).level << endl;
    cout << "Dynamic health: " << (*paul).gethealth() << endl;
    paul->level = 'C';
    paul->sethealth(69);
    cout << "arrow level --->" << paul->level << endl;
    cout << "Arrow health --->" << paul->gethealth() << endl;

    // constructor calling
    // Static
    hero ramesh;

    // Dynamic
    hero *r = new hero();

    hero raghu(65, 'G');
    cout << "New health: " << raghu.gethealth() << endl;
    cout << "New level: " << raghu.level << endl;

    // Copy constructor
    ramesh = raghu;
    cout << "New health: " << ramesh.gethealth() << endl;
    cout << "New level: " << ramesh.level << endl;

    // Static Destructor
    hero tobi;

    // Dynamic destructor
    hero *jackson = new hero();
    // manual destructor
    delete jackson;

    // Static keyword
    cout << hero::timetocomplete << endl;
    int a = hero::timetocomplete;
    cout << "Printing with the help of different variable: " << a << endl;
    return 0;
}
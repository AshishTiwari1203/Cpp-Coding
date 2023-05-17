#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void Welcome()
{
    cout << "--------------------------------------------" << endl;
    cout << "-------- Welcome To BANK OF MIT-----------" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Please Enter your Name and Account Number below:  " << endl;
}

void displaySI(double principal, double rate, double time, double simpleInterest, string name, int Acc)
{
    cout << "Namaste " << name << endl;
    cout << "Account Number: " << Acc << endl;
    cout << "Principal Amount: " << principal << endl;
    cout << "Rate of Interest: " << rate << "%" << endl;
    cout << "Time (in years): " << time << endl;
    cout << "Simple Interest: " << simpleInterest << endl;
}

double calculateSimpleInterest(double principal, double rate, double time)
{
    double SI;
    SI = (principal * rate * time) / 100;
    cout << "SO the simple intrest is: " << SI << endl;
    return SI;
}

int main()

{
    // Welcome statement
    int Acc;
    string name;
    Welcome();
    cout << "Name: ";
    cin >> name;
    cout << endl;
    cout << "Acc No: ";
    cin >> Acc;

    // Input values for principal, rate, and time
    double principal, rate, time;

    cout << "Enter Principal Amount (in RS): ";
    cin >> principal;
    cout << "Enter Rate of Interest (in %): ";
    cin >> rate;
    cout << "Enter Time (in years): ";
    cin >> time;

    // Simple Interest Calculation
    double SI = calculateSimpleInterest(principal, rate, time);
    cout << endl;
    cout << "----------------Loading-----------------" << endl;
    cout << endl;

    // Display the Simple Interest
    displaySI(principal, rate, time, SI, name, Acc);

    return 0;
}
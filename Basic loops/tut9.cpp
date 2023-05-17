#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "table of number: ";
    cin >> a;
    int i = 1;
    while (i <= 10)
    {
        cout << a << "*" << i << "= " << a * i << endl;
        i++;
    }
    return 0;

    // for(initialisation, condition, updation){
    //    loop body
    // }

    /* ---WHILE LOOP
    while(condition){
        c++ statements;
    }
return 0;*/
}
/*int main()
{
    int a, sum = 0;
    cin >> a;
    int counter = 1;
    for (counter <= a; counter++){
        sum = sum + counter;}
    cout << sum;
    return 0;
}*/
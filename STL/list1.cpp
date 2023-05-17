#include <iostream>
#include <list>
using namespace std;
void display(list<int> nlist)
{
    for (int i : nlist)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    list<int> l;

    l.push_front(1); // Inserts elment in front of list
    l.push_front(0);
    l.push_back(2); // Inserts element at the last of list
    l.push_back(3);
    l.push_back(4);
    list<int> newln(l); // copying list in "l" and
    display(newln);

    list<int> sum(10, 3); /*creating a new list with name sum
     and giving its size as 10 and initializing every value with 3*/
    display(sum);
    cout << "Size of list: " << l.size() << endl;
    cout << "Displaying our list:" << endl;
    display(l);
    cout << "First element: " << l.front() << endl;
    return 0;
}
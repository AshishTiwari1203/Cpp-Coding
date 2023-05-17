#include <iostream>
#include <math.h>
using namespace std;

int reverse(int n)
{
    int reverse = 0, remainder;
    for (; n > 0; n = n / 10)
    {
        remainder = n % 10;
        reverse = (reverse * 10) + remainder;
    }
    return reverse;
}

int main()
{
    int n = 12345;
    int length = trunc(log10(n)) + 1;
    cout << length << endl;
    int first = n / pow(10, length - 1);
    int last = n % 10;
    int sum1 = (first * 10) + last;
    cout << sum1 << endl;
    int i = 0, rem, sum = 0;

    int num = reverse(n);
    for (int i = 0; i < length - 1; i++)
    {
        rem = num % 10;
        sum = sum * 10 + rem;
        num = num / 10;
    }
    int mid = sum - (first * pow(10, length)) - last;
    mid = mid / 10;
    int final = mid + sum1;
    cout << final;

    /*for (int i = 1; i < end; i++)
    {
        sum2 += arr[i];
    }
    int final = sum1 + sum2;

    cout << "Your Answer is: " << final << endl;*/
    return 0;
}

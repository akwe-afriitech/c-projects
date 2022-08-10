#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0, temp;
    cout<<"please enter first number to be swapped : ";
    cin>>a;
    cout<< "enter second number : ";
    cin>>b;

    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter swapping." ;
    cout << "a = " << a << ", b = " << b ;

    return 0;
}

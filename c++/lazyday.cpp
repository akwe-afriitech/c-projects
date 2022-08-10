#include<iostream>
using namespace std;
int main()
{
    int temp;
    cout << "Enter the temperature of the environment:";
    cin >> temp;

    if(temp >= 80)
    {
        cout << "you can go for swimming";
    }

    else if(temp>=60 && temp<80)
    {
        cout << "you shld go play tennis";
    }

    else if(temp>=40 && temp<60)
    {
        cout << "you shld go play golf";
    }

    else if( temp>95 || temp<20)
    {
        cout << "visit our shop ";
    }

    else if(temp<40)
    {
        cout << "you should go for skiing";
    }



    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int month, year;

    cout << "Enter month number (1-12): ";
    cin >> month;
    cout << "enter year: ";
    cin>>year;
    if(month == 1 || month== 3 || month==5 || month ==7 || month== 8 || month== 12 || month==10)
    {
        cout << "This month has 31 days";
        cout<< "\n";
        cout << "in the year of "<<year;
    }
    else if(month == 2)
    {
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0) {
                    cout << year << " is a leap year. \n";
                    cout << "this month has 29 days";
                    cout<< "\n";
                    cout << "in the year of "<<year;
                }
                else {
                    cout << year << " is not a leap year.";
                    cout << "this month has 28 days";
                    cout<< "\n";
                    cout << "in the year of "<<year;
                }
            }
            else {
                cout << year << " is a leap year.";
                cout << "this month has 29 days";
                cout<< "\n";
                cout << "in the year of "<<year;
            }
        }
        else {
            cout << year << " is not a leap year.";
            cout << "this month has 28 days";
            cout<< "\n";
            cout << "in the year of "<<year;
        }
    }
    else if(month == 4 || month==6 || month==9)
    {
        cout << "this month has  30 days";
        cout<< "\n";
        cout << "in the year of "<<year;
    }
    else if(month<1 || month>12)
    {
        cout << "Invalid input! Please enter month number between (1-12).";
    }
    return 0;
}

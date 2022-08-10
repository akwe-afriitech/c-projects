#include<iostream>
using namespace std;
int main()
{
    int day, month, year;

    cout<< "enter the day number(between 1-31)";
    cin>>day;
    cout << "Enter month number (1-12): ";
    cin >> month;
    cout << "enter year between 1000 and 1999 ";
    cin>>year;
    if( day>=1 && day<=31 && month>=1 && month<=12 && year>=1000 && year<=1999){
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0) {
                    cout << year << " is a leap year. \n";
                    cout<<"date is valid";
                }
                else {
                    cout << year << " is not a leap year.";
                    cout <<"date is valid";
                }
            }
            else {
                cout << year << " is a leap year.";
                cout<<" date is valid";
            }
        }
        else {
            cout << year << " is not a leap year.";
            cout<< "date is valid";

        }
    }
    else if(day<=1 || day>=31 || month<=1 || month>=12 || year<=1000 || year>=1999)
    {
        cout<<"Date is not valid";
    }
    else;
    cout<<"";
    return 0;
}

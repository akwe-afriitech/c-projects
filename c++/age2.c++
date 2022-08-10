#include<iostream>
using namespace std;

int main()
{
string staments[] = {"welcome to the world","sorry, you are not old enough for anything yet","you dont need a diaper", "you can drive", "you can see R rated movie", "youn can gamble", "you can vote" ,"you can rent a car","you can retire"};
int age;
cout<<"Please enter your age : ";
    cin>>age;

cout<<"Your age is : "<<age<<endl;

if(age==0)
 cout<<staments[0]<<endl;

else if(age<3)
    cout<<staments[1]<<endl;

else if(age>=3)
    cout<<staments[2]<<endl;
else if(age>=16)
    cout<<staments[3]<<endl;

else
    cout<<"you need to loose : "<<endl;

return 0;
}

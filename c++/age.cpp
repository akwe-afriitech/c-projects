#include<iostream>
using namespace std;
int main(){
     string statment[] ={
      "welcome to the world ",
    "sorry you are not old enough for anything yet ",
      "you dont need diapers",
      "you can drive",
      "you can see R rated movie"
      };
      int age;
      cout<<"input your age ";
      cin>>age;

      if(age==0)
      cout<<statment[0];

      else if(age<3)
      cout <<statment[1];

      else if (age>=3 && age<16)
      cout<<statment[2];

      else if (age>=16)
      cout<<statment[3] + " and " + statment[2] ;
      return 0;
}

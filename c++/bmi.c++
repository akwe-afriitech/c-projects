#include<iostream>
using namespace std;
int main(){
 float h,w,BMI,x;
 cout<<"input your height: ";
 cin>>h;
 cout<<"input your weight: ";
 cin>>w;
 BMI=(w)/(h*h);
 cout<<"your BMI is: "<<BMI;

 if (BMI>25){
 x=BMI-25;
 cout<<"\n you have to lose "<<x<<"kgs";
 }
 else (BMI>20 && BMI<25){
 cout<<"\n you have normal weight ";
 }

 else;{
 cout<<"";

 }


return 0;
}

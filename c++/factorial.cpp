#include <iostream>
using namespace std;



int main() {
    int n,i=1,x=1;

    cout<< "enter a non-negative interger";
    cin>>n;


    if(n>=0){
        do{

            x=x*i;
            i++;
        }
        while(i<=n );
        cout<<"Factorial of " <<n<<" is: "<<x;
    }
    else{
    cout<<"please enter a valid interger";
    }
    return 0;
}

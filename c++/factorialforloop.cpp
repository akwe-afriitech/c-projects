    #include <iostream>
    using namespace std;
    int main()
    {
       int i,f=1,n;
      cout<<"Enter any Number: ";
     cin>>n;
      for(i=1;i<=n;i++){
          f=f*i;
      }
      cout<<"Factorial of " <<n<<" is: "<<f;
      return 0;
    }

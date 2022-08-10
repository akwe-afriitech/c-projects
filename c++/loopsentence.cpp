#include <iostream>
using namespace std;

int main() {
  int i = 1, n;
  cout<<"enter number of times u want this message to be printed";
  cin>>n;
  do {

    cout << "i love computer science" << "\n";

    i= i+1;


  }
  while (i < n);

    cout<< "printed this message " <<n<<" times ";
    cout<< i+1;
  return 0;
}


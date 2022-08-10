#include <iostream>
using namespace std;

int main() {

  int i = 1, n=0;

  do {

    cout <<"2^"<<n<<" = "<<i << "\n";
    i= i*2;
    n= n+1;


  }
  while (i < 10 );

  return 0;
}

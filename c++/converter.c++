#include <iostream>

void printInBase(int x, int y)
{
   if ( x < y )
   {
      std::cout << x;
      return;
   }

   int rem = x%y;
   printInBase(x/y, y);
   std::cout << rem;
}

int main()
{
   int x, y;
   std::cout << "enter two numbers" << std::endl;
   std::cin >> x >> y; // x as the number in base-10 and x, as the destination base
   printInBase(x, y);
   std::cout << '\n';
}

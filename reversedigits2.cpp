#include <iostream>
using namespace std;

int main()
{
  cout << "Enter an integer: " << endl;
  int n;
  cin >> n;
   
  // TODO: Print the digits of n in reverse

  int retVal = 0;
  int digit = 0;
  
  if (n > 0) {
    while (n > 0)
      {
	digit = n % 10;
	retVal *= 10;
	retVal += digit;
	n = n / 10;
      }
  }
  else {
    while (n < 0)
      {
	digit = n % 10;
	retVal *= 10;
	retVal += digit;
	n = n / 10;
      }
    //retVal *= -1;    
  }

  cout << retVal << endl;

  return 0;
}

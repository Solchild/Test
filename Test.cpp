# Test
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

int main()
{
  string numBin = "";
  int numDec;
  int quotient;
  
  cout << "Enter your base 10 number." << endl;
  cin >> numDec;
  quotient = numDec;
  try{
  	if(numDec < 0)
  		throw runtime_error("Invalid base 10 number.");
  }
  catch(runtime_error &except){
  	cout << except.what() << endl;
  	cout << "Cannot convert this number to binary." << endl;
  }
  while(quotient > 0){
      if(quotient % 2 == 0)
        numBin = "0" + numBin;
      else numBin = "1" + numBin;
      quotient = quotient / 2;
  }
  cout << "Here comes what you were looking for:" << endl;
  cout << numDec << " in binary = " << numBin;
}

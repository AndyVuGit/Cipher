#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
  vector<int> passNum = {2, 12, 156, 27, 30, 30, 34, 29, 15, 3};
  size_t size = passNum.size() - 2;
  vector<char> pass(size);

  //Decipher vowels first
  for (int i = 1; i <= passNum[0]; i++)
  {
	//Decipher code goes here
  }
  //totalSize is the size of our word
  int totalSize = passNum.size() - 2;
  //Keep a side index to traverse passNum
  int sideCount = 0;
  for (size_t k = passNum[0] + 1; k < passNum.size() - 1; k++)
  {
    //If the current place in passNum is taken, iterate until you find one that isn't
    while(pass[sideCount] != '\0'){
      sideCount++;
    }

    //Same decipher code as the one before but use sideCount as the index
  }

}

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

bool checkVowel(char a);

int main()
{
  string tempPass = "";
  cin >> tempPass;

  int totalLength = tempPass.length();
  //Initialize vector with the total length of the word plus the 2 salt.
  vector<int> cipher(totalLength+2);
  //Keep track of the current index that we are on for the vector
  int cipherIndex = 1;
  //Grab all vowels first
  for (int i = 0; i < totalLength; i++)
  {
    if (checkVowel(tempPass[i])){
	  //Encrypting the vowels code goes here.
    }
  }
  //Grab the conscentants
  for(int k = 0; k < totalLength; k++)
  {
    if (!checkVowel(tempPass[k])){
      //Encrypting the rest of the letters goes here.
    }
  }

  cipher[cipherIndex] = secret;

  for (size_t m = 0; m < cipher.size(); m++)
  {
    cout << cipher[m] << " ";
  }

  return 0;
}

bool checkVowel(char a)
{
  if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'){
    return true;
  }
  return false;
}

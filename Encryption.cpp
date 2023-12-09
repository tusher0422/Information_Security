#include <bits/stdc++.h>
using namespace std;

void affine_cipher(string s)
{
  int key1, key2;
  cout << "\nEnter key1: ";
  cin >> key1;
  cout << endl;
  cout << "Enter key2: ";
  cin >> key2;
  cout << "\nEncrypted text:";
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] != ' ')
    {
      int encrypt = (int)s[i] - 97;
      encrypt = ((encrypt * key1) + key2) % 26;
      encrypt += 97;
      cout << (char)encrypt;
    }
    else
      cout << " ";
  }
}
void additive_cipher(string s)
{
  int key;
  cout << "\nEnter key:";
  cin >> key;
  cout << "\nEncrypted text:";
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] != ' ')
    {
      int encrypt = ((int)s[i]) -97;
      encrypt = (encrypt + key) % 26;
      encrypt += 97;
      cout << (char)encrypt;
    }
    else
      cout << " ";
  }
  cout << endl;
}
void multiplicative_cipher(string s)
{
  int key;
  cout<<"Enter key: ";
  cin >> key;
  cout << "\nEncrypted text:";
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] != ' ')
    {
      int encrypt = (int)s[i] - 97;
      encrypt = (encrypt * key) % 26;
      encrypt += 97;
      cout << (char)encrypt;
    }
    else
      cout << " ";
  }
}
int main()
{
  string s;
  cout << "Enter string s:";
  getline(cin, s);
  cout << endl;
  int opt;
  cout << "Choose a cipher option:\n";
  cout << "1. Affine Cipher\n";
  cout << "2. Additive Cipher\n";
  cout << "3. Multiplicative Cipher\n";
  cout << endl;
  cout << "Enter option: ";
  cin >> opt;

  switch (opt)
  {
  case 1:
  {
    affine_cipher(s);
    break;
  }
  case 2:
  {
    additive_cipher(s);
    break;
  }
  case 3:
  {
    multiplicative_cipher(s);
    break;
  }
  default:
    cout << "Invalid option\n";
  }
  return 0;
}

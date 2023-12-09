#include <bits/stdc++.h>
using namespace std;

void decrypt_Add(string s)
{
    int key;
    cout << "\nEnter key:";
    cin >> key;
    cout << "\nDecrypted text:";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            int decrypt = ((int)s[i]) - 97;
            decrypt = (decrypt - key) % 26;
            decrypt += 97;
            cout << (char)decrypt;
        }
        else
            cout << " ";
    }
    cout << endl;
}

void decrypt_Multi(string s)
{

    int key;
    cout << "Enter key: ";
    cin >> key;
    int inverse = 0;
    for (int i = 1; i < 26; i++)
    {
        if ((key * i) % 26 == 1)
        {
            inverse = i;
            break;
        }
    }
    cout << "\nDecrypted text:";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            int decrypt = (int)s[i] - 97;
            decrypt = (decrypt * inverse) % 26;
            decrypt += 97;
            cout << (char)decrypt;
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
    cout << "Choose a decipher option:\n";
    cout << "1. Additive \n";
    cout << "2. Multiplicative \n";
    cout << endl;
    cout << "Enter option: ";
    cin >> opt;

    switch (opt)
    {
    case 1:
        decrypt_Add(s);
        break;
    case 2:
        decrypt_Multi(s);
        break;
    default:
        cout << "Invalid option selected.\n";
        return 1;
    }

    return 0;
}

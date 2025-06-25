#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string str1, string str2)
{
    if (str1.length() != str2.length())
    {
        cout << "not valid anagram" << endl;
        return false;
    }

    int count[26] = {0};

    // Count characters in the first string
    for (int i = 0; i < str1.length(); i++)
    {
        int idx = str1[i] - 'a';
        count[idx]++;
    }

    // Decrease count for characters in the second string
    for (int i = 0; i < str2.length(); i++)
    {
        int idx = str2[i] - 'a';
        count[idx]--;

        // If any count goes below zero, they are not anagrams
        if (count[idx] < 0)
        {
            cout << "not valid anagram" << endl;
            return false;
        }
    }

    cout << "valid anagram" << endl;
    return true;
}

int main()
{
    string str1 = "anagram";
    string str2 = "ngaram";

    isAnagram(str1, str2);

    return 0;
}

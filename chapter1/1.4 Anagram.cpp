// Find if two strings are anagrams
// Input : string_1 = "abcd"; string_2 = "dcba";
// output : Given two strings are anagram;

#include <algorithm>
#include <iostream>
#include <string.h>

using namespace std;

bool anagram(string str1,string str2) {

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if(str1 == str2)
        return true;
    else
        return false;
}

int main()
{
    string str1, str2;
    cout << "Enter the first string : ";
    getline(cin, str1);
    cout << "Enter the second string : ";
    getline(cin, str2);
    if(anagram(str1, str2))
        cout << "Given two strings are anagrams.";
    else
        cout << "Given two strings are not anagrams.";

    return 0;
}

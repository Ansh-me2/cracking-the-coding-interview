// Check if string2 is rotation of sting1, example string1 = "waterbottle" string2 = "erbottlewat"

#include <iostream>
#include <string>

using namespace std;

bool check_rotation(string str1, string str2){
    if(str1.length() != str2.length())
        return false;

    string str3 = str2 + str2;

    if(str3.find(str1) != string::npos)
        return true;
    return false;
}

int main()
{
    string str1,str2;
    cout << "Enter the first string : ";
    getline(cin, str1);
    cout << "Enter the second string : ";
    getline(cin,str2);
    if(check_rotation(str1,str2))
        cout << "\nIt is rotated";
    else
        cout << "\nIt is not rotated";
    return 0;
}

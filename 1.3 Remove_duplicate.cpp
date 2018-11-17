// Remove duplicate from a given string using additional memeory
// time complexity = O(n)
// input : ababccba
// output : abc

#include <iostream>
#include <string.h>

using namespace std;

void remove_duplicate(char * str) {
    if(str == NULL)
        return;
    if(strlen(str) == 1)
        return;

    int tail = 1;
    bool hit[256] = {false};
    hit[str[0]] = true;
    for(int i = 1; i < strlen(str); i++){
        if(!hit[str[i]]){
            str[tail] = str[i];
            tail++;
            hit[str[i]] = true;
        }
    }
    str[tail] = 0;
    return;
}

int main()
{
    cout << "Enter a string ";
    char str[100];
    cin.getline(str,sizeof(str));
    cout << "Original String : " << str <<endl;
    remove_duplicate(str);
    cout << "Duplicate removed string : " << str;

    return 0;
}

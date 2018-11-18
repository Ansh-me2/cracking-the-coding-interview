// replaces spaceces in a string with '%20'
// time-complexity : O(n)
// Input : This is it.
// Output : This%20is%20it.

#include <iostream>
#include <string.h>

using namespace std;

void replace_space(char * str){

    int count = 0;
    for(int i = 0; i < strlen(str) - 1; i++) {
        if(str[i] == ' ')
            count++;
    }

    int len = strlen(str) + count * 2;
    
    str[len] = '\0';
    for(int i = strlen(str) - 1; i >= 0; i--){
        if(str[i] == ' '){
            str[len - 3] = '%';
            str[len - 2] = '2';
            str[len - 1] = '0';
            len = len - 3;
        }
        else{
            str[len - 1] = str[i];
            len = len - 1;
        }
    }
}

int main()
{
    char str[100];
    cout << "Enter the string : ";
    cin.getline(str, sizeof(str));
    replace_space(str);
    cout << "New string : " << str;

    return 0;
}

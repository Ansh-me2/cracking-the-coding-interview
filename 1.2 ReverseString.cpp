#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

char * reverse (char * str)
{
  if(str == NULL){
      return NULL;
  }
  char *start = str;
  char *end = str + strlen(str) - 1;

  while(end > start){
      char temp = *start;
      *start = *end;
      *end = temp;

      start++;
      end--;
  }
  return str;
}

int main ()
{
  cout << "Enter a string ";
  char str[100];
  cin.getline(str,sizeof(str));
  cout << "Original String : " << str << endl;
  strcpy(str,reverse(str));
  cout << "Reverse String : " << str;

  return 0;
}
